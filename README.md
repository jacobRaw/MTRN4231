*Note: to view rendered mark down files in vs code press, 'shift','Ctrl','v'*

# 4231 

## File Overview

Welcome to 4231, hope you enjoy this course and learning ROS. To help you in your learning some demo, utility and stub files are provided. An overview of the included directories can be found below. 

### 4231_demo_packages

* demo_client_service 
    - client example
    - service example

* demo_interactive_marker
    - basic interactive commands

* demo_lauch_param
    - rviz marker example
    - launch file example

* demo_moveit_ur
    - basic movement example
    - collision avoid example
    - constained path example
    - servo movement example

* demo_tf2
    - static frame example
    - dyanmic frame example
    - listner example


### 4231_scripts

* camera.sh
    - Launch ros2 camera interface

* setupFakeur5e.sh
    - Launches ur driver and moveit server 
    - Launches in visulisation mode
    - Launches rviz with motion planner interface

* setupRealur5e.sh
    - Launches ur driver and moveit server 
    - Connects to physical hardware and IP address
    - Launches rviz with motion planner interface

### 4231_utils

* util_arduino_serial 
    - Creates a serial communication with arduino, passes through string message from a topic

* util_keyboard 
    - Allows a user to publish key presses to a topic


### Labs and Project Workspace
These directories allow for lab and project work. Lab instructions can be found inside each directory. 


### ros_ur_driver
Source install of the ros universal robotics driver. Has been source installed as some files have been changed for course convience. 

*Edit at your own risk*

If rebuilding follow instructions on github carefully.


### ws_moveit2
Source install of moveit 2. Has been source installed as some files have been changed for course convience.

*Edit at your own risk*

If rebuilding follow instruction on github carefully. A full rebuild can take 30+ minutes.