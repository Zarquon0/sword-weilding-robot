import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from geometry_msgs.msg import Point, Vector3, Quaternion
from duel_msgs.msg import DuelBotObservation
from std_srvs.srv import Trigger
from rclpy.task import Future   
import numpy as np
from dataclasses import dataclass

from actor_critic import ActorCritic
import torch

np.seterr(all='raise')

OBSERVATION_TOPIC = "arm_observations"
COMMAND_TOPIC = "arm_command_targets"
RESET_SERVICE = "duel_bot/reset"
QUEUE_LENGTH = 10
OUTPUT_SIZE = 7
# FREQUENCY = 20 # In hertz
BLADE_LENGTH = 0.7  # Meters 
BLADE_AXIS_LOCAL = [0, 1, 0] # +Y

@dataclass()
class RolloutRecord:
    obs: torch.Tensor
    action: torch.Tensor
    log_prob: float
    value: float
    reward: float | None
    done: bool | None

# UTILITY
def to_numpy(ros_vec: Point | Vector3 | Quaternion) -> np.ndarray:
    """Converts Point, Vector3, or Quaternion msg to a numpy array."""
    if hasattr(ros_vec, 'w'): #Quaternion
        return np.array([ros_vec.x, ros_vec.y, ros_vec.z, ros_vec.w], dtype=np.float32)
    else: #Vector or Point
        return np.array([ros_vec.x, ros_vec.y, ros_vec.z], dtype=np.float32)

class ArmCommander(Node):
    def __init__(self):
        # Initialize important control state
        self.model: ActorCritic | None = None
        self.is_running = False
        self.is_resetting = False
        self.device = torch.device("cpu")
        # Initialize ROS stuff
        super().__init__('arm_controller')
        self.subscription  = self.create_subscription(DuelBotObservation, OBSERVATION_TOPIC, self.observation_response, QUEUE_LENGTH)
        self._publisher = self.create_publisher(Float64MultiArray, COMMAND_TOPIC, QUEUE_LENGTH)
        self.reset_client = self.create_client(Trigger, RESET_SERVICE)
        # Initial Reset
        print("Waiting for reset service registration")
        self.reset_client.wait_for_service()
        self.training_reset()
    
    def run(self, model: ActorCritic):
        """
        Run the controller with the given model indefinitely
        """
        self.model = model
        self.is_running = True
    
    def training_reset(self):
        print("Resetting")
        self.is_resetting = True
        self.reset_client.wait_for_service()
        reset_fut = self.reset_client.call_async(Trigger.Request())
        reset_fut.add_done_callback(self.on_reset_complete)
    
    def on_reset_complete(self, fut: Future):
        resp = fut.result()
        if resp.success: self.is_resetting = False
        else: raise Exception("Reset failed (resp.success = false)")

    def observation_response(self, msg: DuelBotObservation):
        # If node is in paused state, do nothing
        if not self.is_running or self.is_resetting:
            return None
        # If the cube was hit, reset everything and exit
        if msg.hit_target:
            self.training_reset()
            return None
        # Combine all data into an array for training
        model_ipts = self.pack_observation(msg)
        # Run the model to see the output
        model_outs, _, _ = self.run_model(model_ipts)
        # Publish the command message based off of the model's output
        self.publish_command(model_outs.numpy())

    def pack_observation(self, msg: DuelBotObservation) -> torch.FloatTensor:
        targ_pos = to_numpy(msg.target_position)
        tip_to_target = targ_pos - to_numpy(msg.tip_position)
        handle_to_target = targ_pos - to_numpy(msg.handle_position)
        closest_to_target = targ_pos - to_numpy(msg.closest_blade_position)
        model_ipts = np.concatenate([
            tip_to_target,
            handle_to_target,
            closest_to_target,
            to_numpy(msg.shoulder_rotation),
            np.array([msg.elbow_rotation], dtype=np.float32),
            to_numpy(msg.wrist_rotation),
            to_numpy(msg.shoulder_vel),
            np.array([msg.elbow_vel], dtype=np.float32),
            to_numpy(msg.wrist_vel),
        ])
        return torch.FloatTensor(model_ipts)
    
    def publish_command(self, cmd: np.ndarray):
        to_publish = Float64MultiArray()
        to_publish.data = cmd.tolist()
        self._publisher.publish(to_publish)

    def run_model(self, ipts: torch.Tensor) -> tuple[torch.Tensor,torch.Tensor,torch.Tensor]:  
        if self.model:
            with torch.no_grad():
                obs_tensor = ipts.unsqueeze(0).to(self.device)
                action, log_prob, _, value = self.model.get_action_and_value(obs_tensor)
            return action, log_prob, value
        else: 
            return torch.empty(OUTPUT_SIZE).uniform_(-1.0, 1.0), torch.zeros(1), torch.zeros(1)
        
    # NOTE: Not used currently for readability's sake
    def _flatten_message(self, msg: DuelBotObservation):
        """
        Recursively unpacks a ROS message into a flat list of floats.
        Handles nested types (Vector3, Quaternion) and arrays automatically.
        """
        flat_list = []
        for field_name in msg.get_fields_and_field_types().keys():
            value = getattr(msg, field_name)
            if hasattr(value, 'get_fields_and_field_types'): # Nested ROS message
                flat_list.extend(self.flatten_message(value))
            elif isinstance(value, (list, tuple, np.ndarray)): # Nested data non-atomic data structure
                flat_list.extend(value)
            else: # Atomic value
                flat_list.append(float(value))
        return flat_list

class ArmTrainer(ArmCommander):
    def __init__(self):
        # Initialize overarching training state
        self.rollout_buffer: list[RolloutRecord] = []    # Stores the episode history
        self.steps_requested = 0    # How many steps to collect?
        self.final_obs = None
        # Initialize episodic/time-step training state
        self.pending_step = None 
        self.last_dist = None
        self.closest_dist = None
        # Standard commander initialization
        super().__init__()
    
    def train(self, model: ActorCritic, steps: int):
        # Reset training state + set is_collecting to True
        self.rollout_buffer = []
        self.model = model
        self.steps_requested = steps
        self.is_running = True
        # Reset arm/environment
        self.episode_reset()

    def self_training_reset(self):
        self.pending_step = None
        self.last_dist = None
        self.closest_dist = None
    
    def episode_reset(self):
        self.training_reset()
        self.self_training_reset()

    def observation_response(self, msg: DuelBotObservation):
        if not self.is_running or self.is_resetting: return
        # Mark down reward and done for last action
        too_far = False
        if self.pending_step:
            last_ac_reward, too_far = self.reward(msg)
            self.pending_step.reward = last_ac_reward
            self.pending_step.done = msg.hit_target
            self.rollout_buffer.append(self.pending_step)
            self.pending_step = None
        # Determine whether to reset or finish the episode
        if msg.hit_target or too_far:
            self.episode_reset()
            return 
        if len(self.rollout_buffer) >= self.steps_requested:
            self.final_obs = self.pack_observation(msg)
            self.finish_rollout()
        # Determine next action and mark down decision
        model_ipts = self.pack_observation(msg)
        action, log_prob, value = self.run_model(model_ipts)
        action_np = action.cpu().numpy().flatten()
        self.pending_step = RolloutRecord(model_ipts, action_np, log_prob.item(), value.item(), None, None)
        # Publish action to take
        self.publish_command(action_np)

    def reward(self, msg: DuelBotObservation):
        """ The Judge """
        reward = 0.0
        # quat = [msg.sword_rotation.x, msg.sword_rotation.y, msg.sword_rotation.z, msg.sword_rotation.w]
        # tip_direction = rotate_vector_by_quaternion(BLADE_AXIS_LOCAL, quat)
        # tip_vector = tip_direction * BLADE_LENGTH
        # dist = point_line_segment_distance(
        #     msg.relative_target_position.x, 
        #     msg.relative_target_position.y, 
        #     msg.relative_target_position.z,
        #     tip_vector[0], tip_vector[1], tip_vector[2]
        # )
        # dist = np.linalg.norm([msg.relative_target_position.x, msg.relative_target_position.y, msg.relative_target_position.z])
        # Delta Distance Reward
        dist = np.linalg.norm(to_numpy(msg.target_position) - to_numpy(msg.closest_blade_position))
        if self.last_dist is not None:
            delta_dist = self.last_dist - dist
            incr = (self.last_dist - dist) * 5
            if delta_dist > 0: incr += 0.05
            reward += incr
        self.last_dist = dist
        # End episode with big penalty if the sword has drifted too far
        if not self.closest_dist or self.closest_dist > dist:
            self.closest_dist = dist
        too_far = dist > self.closest_dist + 0.5
        if too_far: reward -= 5
        # Absolute Distance Penalty (replacing temporal penalty)
        reward -= dist*0.01
        # Hit Reward
        if msg.hit_target: reward += 10.0
        print(reward)
        return reward, too_far
    
    def finish_rollout(self):
        """ Stop collection and signal the trainer """
        self.is_running = False
        print(f"Collection Complete! Buffer Size: {len(self.rollout_buffer)}")
        # Stop the robot so it doesn't drift while we train
        self.publish_command(np.zeros(7))

#
# MATH helper functions
# 
        
def rotate_vector_by_quaternion(v, q):
    """
    Rotates vector v (x,y,z) by quaternion q (x,y,z,w).
    Uses the Rodrigues' rotation formula simplified for quaternions.
    """
    v = np.array(v)
    q_vec = np.array(q[:3]) # x, y, z
    q_scalar = q[3]         # w
    
    # Formula: v + 2.0 * cross(q_vec, cross(q_vec, v) + q_scalar * v)
    return v + 2.0 * np.cross(q_vec, np.cross(q_vec, v) + q_scalar * v)

def point_line_segment_distance(px, py, pz, line_end_x, line_end_y, line_end_z):
    """
    Calculates distance from Point P to the Segment (0,0,0)->(LineEnd)
    """
    # P: The target position vector relative to the handle
    p = np.array([px, py, pz])
    
    # B: The tip of the sword relative to the handle
    b = np.array([line_end_x, line_end_y, line_end_z])
    
    # Calculate squared length of the blade
    len_sq = np.dot(b, b)
    if len_sq == 0: return np.linalg.norm(p) # Safety check
    
    # Project P onto B (The dot product gives the "shadow" length)
    # t is the percentage (0.0 to 1.0) of how far along the blade the closest point is
    t = np.dot(p, b) / len_sq
    
    # Clamp t to the segment [0, 1] (Handle to Tip)
    t = np.clip(t, 0.0, 1.0)
    
    # Find the closest point C on the line
    closest_point = b * t
    
    # Return distance between Target (P) and Closest Point (C)
    return np.linalg.norm(p - closest_point)



def main():
    rclpy.init()
    node = ArmCommander()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
