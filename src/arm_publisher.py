import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
import math
import time

class SevenDofWiggler(Node):
    def __init__(self):
        super().__init__('seven_dof_wiggler')
        self.publisher_ = self.create_publisher(Float64MultiArray, 'arm_command_targets', 10)
        self.timer = self.create_timer(0.05, self.timer_callback) # 20Hz
        self.t = 0.0

    def timer_callback(self):
        msg = Float64MultiArray()
        
        # We need 7 values:
        # [0,1,2] = Shoulder X, Y, Z
        # [3]     = Elbow
        # [4,5,6] = Wrist X, Y, Z
        
        # Let's create a complex dance pattern
        shoulder_pitch = 30.0 * math.sin(self.t * 0.5)      # Slow nod
        shoulder_yaw   = 45.0 * math.sin(self.t * 0.3)      # Slow sweep
        shoulder_roll  = 10.0 * math.sin(self.t * 1.0)      # Fast twitch
        
        elbow          = 45.0 + 45.0 * math.sin(self.t * 0.8) # Bends 0 to 90
        
        wrist_twist    = 90.0 * math.sin(self.t * 2.0)      # Rapid spinning
        wrist_flex     = 20.0 * math.cos(self.t * 1.5)      # Waving
        wrist_dev      = 0.0                                # Steady
        
        msg.data = [shoulder_pitch, shoulder_yaw, shoulder_roll, 
                    elbow, 
                    wrist_twist, wrist_flex, wrist_dev]

        self.publisher_.publish(msg)
        self.t += 0.05

def main(args=None):
    rclpy.init(args=args)
    node = SevenDofWiggler()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()