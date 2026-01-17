from arm_commander import ArmTrainer, RolloutRecord
from actor_critic import ActorCritic
import rclpy
import torch
from torch import nn
import numpy as np

torch.autograd.set_detect_anomaly(True)

BATCH_STEPS = 2048
INIT_MODEL_WEIGHTS = "saved_mod1.pth"

def train(model: ActorCritic, total_steps: int = 100_000):
    rclpy.init()
    controller = ArmTrainer()
    if INIT_MODEL_WEIGHTS:
        model.load_state_dict(torch.load(INIT_MODEL_WEIGHTS))
    model = model.to(torch.device("cpu"))
    optimizer = torch.optim.Adam(model.parameters(), lr=3e-4)
    steps_taken = 0
    try:
        while steps_taken < total_steps:
            # Train for BATCH_STEPS steps
            print("Training...")
            controller.train(model, steps=BATCH_STEPS)
            while controller.is_running:
                rclpy.spin_once(controller, timeout_sec=0.01)
            # Update model based on collected experiences during training
            print("Updating Policy...")
            buffer = controller.rollout_buffer
            loss = ppo_update(model, optimizer, buffer, controller.final_obs)
            steps_taken += len(buffer)
            print(f"Update Complete. Loss: {loss:.4f} | Total Steps: {steps_taken}")
            # Optional: Save Model
            if steps_taken % (BATCH_STEPS * 10) == 0:
                print("Saving incremental model")
                torch.save(model.state_dict(), "duelbot_ppo.pth")
        print("Saving FINAL model")
        torch.save(model.state_dict(), "duelbot_ppo.pth")
    except KeyboardInterrupt:
        print("Stopping...")
    finally:
        controller.destroy_node()
        rclpy.shutdown()

def compute_gae(buffer: list[RolloutRecord], last_value: float, gamma=0.99, gae_lambda=0.95):
    """
    Calculates Generalized Advantage Estimation (GAE).
    
    Args:
        buffer: List of dicts from ArmTrainer
        last_value: The Value estimate of the FINAL observation (bootstrapping)
    """
    # 1. Convert buffer to simple lists
    rewards = [step.reward for step in buffer]
    values = [step.value for step in buffer]
    dones = [step.done for step in buffer]
    # 2. Append the 'bootstrap' value to the end of the value list
    # This represents V(s_last+1)
    values = values + [last_value]
    # 3. Calculate GAE
    # We iterate BACKWARDS: from the last step to the first
    advantage = 0
    returns = []
    advantages = []
    for t in reversed(range(len(buffer))):
        # Bookends recursive advantage calc - makes sure only observations 
        # from a given episode are taken into account when evaluating steps from that episode
        next_non_terminal = 1.0 - float(dones[t])
        # Delta = Reward + (gamma * V_next) - V_current
        delta = rewards[t] + gamma * values[t+1] * next_non_terminal - values[t]
        # Advantage = Delta + (gamma * lambda * A_next)
        advantage = delta + gamma * gae_lambda * next_non_terminal * advantage
        advantages.insert(0, advantage)
        # Return = Advantage + Value (Standard PPO practice)
        returns.insert(0, advantage + values[t])
    return torch.tensor(returns), torch.tensor(advantages)

def ppo_update(model: ActorCritic, optimizer: torch.optim.Optimizer, buffer: list[RolloutRecord], 
               final_obs_tensor: torch.Tensor, batch_size=64, epochs=10, clip_coef=0.2, ent_coef=0.01):
    """
    The Main PPO Learning Loop.
    """
    device = next(model.parameters()).device
    
    # --- PRE-PROCESSING ---
    # 1. Calculate 'Last Value' for bootstrapping GAE
    with torch.no_grad():
        last_value = model.get_value(final_obs_tensor)
        last_value = last_value.item()

    # 2. Compute Returns and Advantages
    returns, advantages = compute_gae(buffer, last_value)
    returns = returns.to(device)
    advantages = advantages.to(device)
    
    # 3. Convert buffer to tensors
    obs_batch = torch.tensor(np.array([s.obs for s in buffer]), dtype=torch.float32).to(device)
    act_batch = torch.tensor(np.array([s.action for s in buffer]), dtype=torch.float32).to(device)
    old_log_probs = torch.tensor([s.log_prob for s in buffer], dtype=torch.float32).to(device)
    
    # Normalize advantages (Stable Baselines3 trick for stability)
    advantages = (advantages - advantages.mean()) / (advantages.std() + 1e-8)
    
    # --- OPTIMIZATION LOOP ---
    dataset_size = len(buffer)
    indices = list(range(dataset_size))
    
    for _ in range(epochs):
        # Shuffle data for Mini-batch updates
        np.random.shuffle(indices)
        
        for start in range(0, dataset_size, batch_size):
            end = start + batch_size
            mb_indices = indices[start:end]
            
            # 1. Get Mini-batch
            mb_obs = obs_batch[mb_indices]
            mb_actions = act_batch[mb_indices]
            mb_old_log_probs = old_log_probs[mb_indices]
            mb_advantages = advantages[mb_indices]
            mb_returns = returns[mb_indices] # Advantage + value
            
            # 2. Run Model on Mini-batch
            # We pass mb_actions to get the log_prob of the SPECIFIC actions we took
            _, new_log_probs, entropy, new_values = model.get_action_and_value(mb_obs, mb_actions)
            
            # 3. Calculate Ratio (Pi_new / Pi_old)
            log_ratio = new_log_probs - mb_old_log_probs
            ratio = log_ratio.exp()
            
            # 4. Calculate Surrogate Loss (The "Clip" part)
            surr1 = ratio * mb_advantages
            surr2 = torch.clamp(ratio, 1 - clip_coef, 1 + clip_coef) * mb_advantages
            policy_loss = -torch.min(surr1, surr2).mean()
            
            # 5. Value Loss (MSE between predicted value and actual return)
            # Flatten values just in case
            value_loss = ((new_values.view(-1) - mb_returns) ** 2).mean()
            
            # 6. Entropy Loss (Encourage exploration)
            # This name is a bit misleading since it gets subtracted from overall loss but whatever
            entropy_loss = entropy.mean()
            
            # 7. Total Loss
            # We want to Minimize Policy Loss, Minimize Value Loss, MAXIMIZE Entropy (so minus)
            loss = policy_loss + 0.5 * value_loss - ent_coef * entropy_loss
            
            # 8. Backprop
            optimizer.zero_grad()
            loss.backward()
            nn.utils.clip_grad_norm_(model.parameters(), 0.5) # Gradient Clipping
            optimizer.step()
            
    return loss.item() # Return last loss for logging


if __name__ == "__main__":
    model = ActorCritic()
    train(model)