from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Make sure viz is running if you want to see markers
        Node(
            package='polaris_udp_bridge',
            executable='viz',
            name='polaris_marker_viz',
            output='screen',
            parameters=[
                {'frame_id': 'polaris_camera'},                # publish markers in world
                {'markers_topic': '/polaris/marker_array'},
                {'topic_prefix': 'polaris/tool'},
                {'marker_scale_m': 0.02},
                {'marker_alpha': 0.9},
                {'input_is_mm': False},
            ],
        ),
        # Compute world->polaris_camera from two tools
        Node(
            package='polaris_udp_bridge',
            executable='calibrate_two_tools',
            name='polaris_calibrate',
            output='screen',
            parameters=[
                {'world_frame': 'world'},
                {'camera_frame': 'polaris_camera'},
                {'input_is_mm': False},  # True if your bridge publishes mm
                # Fill these with your *known world poses* for tool0 and tool1:
                # [x,y,z,qx,qy,qz,qw] in world
                {'tool0_world': [0.400, 0.100, 0.250,  0,0,0,1]},
                {'tool1_world': [0.550, 0.120, 0.260,  0,0,0,1]},
                {'publish_marker': True},
            ],
        ),
    ])
