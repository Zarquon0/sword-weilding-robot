import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
import math
import time

class ArmWiggler(Node):
    def __init__(self):
        super().__init__('arm_wiggler')
        self.publisher_ = self.create_publisher(Float64, 'shoulder_pan_pos', 10)
        self.timer = self.create_timer(0.05, self.timer_callback) # 20Hz
        self.t = 0.0

    def timer_callback(self):
        msg = Float64()
        # Create a sine wave that swings between -45 and +45 degrees
        msg.data = 45.0 * math.sin(self.t)
        self.publisher_.publish(msg)
        self.t += 0.05
        # Optional: Print to console
        # self.get_logger().info('Publishing: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = ArmWiggler()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()