# Use the official ROS 2 Jazzy image (supports ARM64/Apple Silicon and AMD64)
FROM ros:jazzy-ros-base

# 1. Install system tools (Git, Python build tools)
RUN apt-get update && apt-get install -y \
    git \
    python3-pip \
    python3-colcon-common-extensions \
    && rm -rf /var/lib/apt/lists/*

# 2. Create the Colcon Workspace
WORKDIR /root/sword-weilding-robot/src

# 3. Clone the Unity TCP Endpoint Interface
# (This is the ROS side of the bridge)
RUN git clone -b main-ros2 https://github.com/Unity-Technologies/ROS-TCP-Endpoint.git

# 4. Build the Workspace
WORKDIR /root/sword-weilding-robot
SHELL ["/bin/bash", "-c"]
RUN source /opt/ros/jazzy/setup.bash && colcon build

# 5. Add the workspace to the bash entrypoint so it sources automatically
RUN echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc
RUN echo "source /root/sword-weilding-robot/install/setup.bash" >> ~/.bashrc
CMD [ "/bin/bash" ]
#CMD ["/bin/bash", "-c", "source /root/ros2_ws/install/setup.bash && ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=0.0.0.0"]