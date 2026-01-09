import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from duel_msgs.msg import DuelBotObservation
from std_srvs.srv import Trigger
from rclpy.task import Future   
import numpy as np

OBSERVATION_TOPIC = "arm_observations"
COMMAND_TOPIC = "arm_command_targets"
RESET_SERVICE = "duel_bot/reset"
QUEUE_LENGTH = 10
# FREQUENCY = 20 # In hertz

class ArmCommander(Node):
    def __init__(self):
        super().__init__('arm_controller')
        self.subscription  = self.create_subscription(DuelBotObservation, OBSERVATION_TOPIC, self.observation_response, QUEUE_LENGTH)
        self._publisher = self.create_publisher(Float64MultiArray, COMMAND_TOPIC, QUEUE_LENGTH)
        self.reset_client = self.create_client(Trigger, RESET_SERVICE)
        self.pause_publishing = False
        # Initial Reset
        print("Waiting for reset service registration")
        self.reset_client.wait_for_service()
        self.training_reset()

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
    
    def training_reset(self):
        print("Resetting")
        self.pause_publishing = True
        self.reset_client.wait_for_service()
        reset_fut = self.reset_client.call_async(Trigger.Request())
        reset_fut.add_done_callback(self.on_reset_complete)
    
    def on_reset_complete(self, fut: Future):
        resp = fut.result()
        if resp.success: self.pause_publishing = False
        else: raise Exception("Reset failed (resp.success = false)")

    def observation_response(self, msg: DuelBotObservation):
        # If node is in paused state, do nothing
        if self.pause_publishing:
            print("PUBLISHING PAUSED!")
            return None
        # If the cube was hit, reset everything and exit
        if msg.hit_target:
            self.training_reset()
            return None
        # Combine all data into an array for training
        model_ipts = [
            msg.relative_target_position.x, msg.relative_target_position.y, msg.relative_target_position.z,
            msg.sword_rotation.x, msg.sword_rotation.y, msg.sword_rotation.z, msg.sword_rotation.w,
            msg.shoulder_rotation.x, msg.shoulder_rotation.y, msg.shoulder_rotation.z, msg.shoulder_rotation.w,
            msg.elbow_rotation,
            msg.wrist_rotation.x, msg.wrist_rotation.y, msg.wrist_rotation.z, msg.wrist_rotation.w,
            msg.shoulder_vel.x, msg.shoulder_vel.y, msg.shoulder_vel.z,
            msg.elbow_vel,
            msg.wrist_vel.x, msg.wrist_vel.y, msg.wrist_vel.z
        ]
        model_ipts = np.array(model_ipts, dtype=float)
        # Run the model to see the output
        model_outs = self.run_model(model_ipts)
        # Publish the command message based off of the model's output
        to_publish = Float64MultiArray()
        to_publish.data = model_outs.tolist()
        print("Publishing", model_outs.tolist())
        self._publisher.publish(to_publish)

    def run_model(self, ipts: np.ndarray[float]) -> np.ndarray[float]:  
        # Normally, we'd run the model here but for now, just some rando data
        return np.random.uniform(-1.0, 1.0, 7)

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
