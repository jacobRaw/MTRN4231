import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jacob/MTRN4231/MTRN4231/4231_demo_packages/src/demo_launch_param/install/demo_launch_param'
