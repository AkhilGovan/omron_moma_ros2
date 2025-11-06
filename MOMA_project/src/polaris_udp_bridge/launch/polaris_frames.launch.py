# file: launch/polaris_frames.launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Identity alias (quick band-aid if you still want to use camera frame)
        # Node(
        #     package='tf2_ros', executable='static_transform_publisher',
        #     name='alias_polaris_optical_identity',
        #     arguments=['0','0','0','0','0','0','polaris_camera','polaris_optical'],
        #     output='screen'
        # ),

        # Proper ROS optical convention: rotate camera frame by Rx(-90°) then Rz(-90°)
        # (roll=-pi/2, pitch=0, yaw=-pi/2)
        Node(
            package='tf2_ros', executable='static_transform_publisher',
            name='polaris_camera_to_optical',
            arguments=['0','0','0','-1.570796','0','-1.570796','polaris_camera','polaris_optical'],
            output='screen'
        ),
    ])
