import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/akhil/Downloads/omron_moma_ros2/install/tm_image'
