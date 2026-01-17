# Sword Information
geometry_msgs/Vector3 handle_position
geometry_msgs/Vector3 tip_position
geometry_msgs/Vector3 closest_blade_position
# Target Information
geometry_msgs/Vector3 target_position
# Joint Rotations
geometry_msgs/Quaternion shoulder_rotation
float32 elbow_rotation
geometry_msgs/Quaternion wrist_rotation
# Joint Velocities
geometry_msgs/Vector3 shoulder_vel
float32 elbow_vel
geometry_msgs/Vector3 wrist_vel
# Hit signal
bool hit_target