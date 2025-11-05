from setuptools import setup, find_packages

package_name = 'polaris_udp_bridge'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(include=[package_name]),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/polaris_bridge_viz.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Akhil',
    maintainer_email='you@example.com',
    description='UDP → PoseStamped bridge + RViz markers for Polaris tools',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'bridge = polaris_udp_bridge.bridge_node:main',
            'viz = polaris_udp_bridge.polaris_viz:main',
            'calibrate_two_tools = polaris_udp_bridge.polaris_calibrate:main',
        ],
    },
)
