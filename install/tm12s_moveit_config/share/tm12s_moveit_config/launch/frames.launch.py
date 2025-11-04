from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Polaris camera in base frame
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='camera_tf',
            arguments=['0.45', '0.12', '0.75', '3.1416', '0.0', '-1.5708', 'base_link', 'camera_frame']
        ),
        # Table reference
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='table_tf',
            arguments=['0.6', '0.0', '0.0', '0.0', '0.0', '0.0', 'base_link', 'table_frame']
        ),
    ])

