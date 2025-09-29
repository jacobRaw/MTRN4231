import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jacob/MTRN4231/lab3_workspace/src/object_detect/install/object_detect'
