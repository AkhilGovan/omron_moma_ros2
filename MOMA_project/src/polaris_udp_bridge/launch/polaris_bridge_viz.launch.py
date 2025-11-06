from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # --- Polaris UDP Bridge ---
        Node(
            package='polaris_udp_bridge',
            executable='bridge',
            name='polaris_udp_bridge',
            output='screen',
            parameters=[
                {'port': 5555},
                {'frame_id': 'polaris_camera'},
                {'base_topic': 'polaris/tool'}
            ],
        ),

        # --- Polaris Visualiser ---
        Node(
            package='polaris_udp_bridge',
            executable='viz',
            name='polaris_marker_viz',
            output='screen',
            parameters=[
                {'frame_id': 'world'},
                {'markers_topic': '/polaris/marker_array'},
                {'topic_prefix': 'polaris/tool'},
                {'marker_scale_m': 0.02},    # 20 mm spheres
                {'marker_alpha': 0.9},
                {'input_is_mm': False},      # True if bridge sends mm
                {'scan_period': 1.0}
            ],
        ),
    ])
