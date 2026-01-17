import torch
import torch.nn as nn
from torch.distributions import Normal

"""
MODEL INPUTS:
3 - Vector from tip to target
3 - Vector from handle to target
3 - Vector from closest point on sword to target
4 - Shoulder rotation
1 - Elbow rotation
4 - Wrist rotation
3 - Shoulder vel
1 - Elbow vel
3 - Wrist vel
TOTAL: 25
"""

class ActorCritic(nn.Module):
    def __init__(self, obs_dim=25, action_dim=7, hidden_size=256):
        super(ActorCritic, self).__init__()
        
        # --- CRITIC (Value Function) ---
        # Estimates V(s): How much reward do I expect from here?
        self.critic = nn.Sequential(
            nn.Linear(obs_dim, hidden_size),
            nn.Tanh(),
            nn.Linear(hidden_size, hidden_size),
            nn.Tanh(),
            nn.Linear(hidden_size, 1)
        )
        
        # --- ACTOR (Policy Function) ---
        # Decides what to do. Outputs Mean for actions.
        # Could be used to output Std Dev, but we are using independent impl. for that now
        # for stability and simplicity's sake
        self.actor_base = nn.Sequential(
            nn.Linear(obs_dim, hidden_size),
            nn.Tanh(),
            nn.Linear(hidden_size, hidden_size),
            nn.Tanh(),
        )
        
        # Mean of the action distribution (The "target" joint angles)
        self.actor_mean = nn.Linear(hidden_size, action_dim)
        
        # Log Standard Deviation (learnable parameter for exploration)
        # We use log_std because std must be positive. exp(log_std) = positive.
        # Independent log_std impl. => does not depend on observation
        self.actor_log_std = nn.Parameter(torch.zeros(1, action_dim))

    def get_value(self, x: torch.Tensor):
        x = torch.as_tensor(x, dtype=torch.float32) # Ensures that x is a tensor (ndarray could be passed in instead)
        return self.critic(x)

    def get_action_and_value(self, x: torch.Tensor, action=None) -> tuple[torch.Tensor,torch.Tensor,torch.Tensor,torch.Tensor]:
        # 1. Forward pass
        x = torch.as_tensor(x, dtype=torch.float32) # Ensures that x is a tensor (ndarray could be passed in instead)
        hidden = self.actor_base(x)
        
        # 2. Get Distribution params
        mean = self.actor_mean(hidden)
        std = self.actor_log_std.exp().expand_as(mean)
        dist = Normal(mean, std)
        
        # 3. Sample Action (during training) or Evaluate Action (during update)
        if action is None:
            action = dist.sample()
            
        # 4. Calculate Log Probability (needed for PPO Math)
        log_prob = dist.log_prob(action).sum(axis=-1)
        
        # 5. Get Value
        value = self.critic(x)
        
        return action, log_prob, dist.entropy().sum(axis=-1), value