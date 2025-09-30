import os
import xacro

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import TimerAction, IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import PathJoinSubstitution, LaunchConfiguration
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    use_fake = 'true' # change this value

    # Set IP addresses based on whether we are using a fake or real robot
    ip_address_fake = 'yyy.yyy.yyy.yyy'
    ip_address_real = '192.168.0.100'

    # UR Control Launch Arguments
    ur_control_launch_args = {
        'ur_type': 'ur5e',
        'robot_ip': ip_address_fake,
        'use_fake_hardware': use_fake,
        'launch_rviz': 'false',
    }

    moveit_launch_args = {
        'ur_type': 'ur5e',
        'launch_rviz': 'true',
    }

    # Update arguments based on whether we are using the fake or real robot
    if use_fake == 'false':
        ur_control_launch_args['robot_ip'] = ip_address_real
        moveit_launch_args['robot_ip'] = ip_address_real
        print("Using Real Robot")
    else:
        ur_control_launch_args['initial_joint_controller'] = 'joint_trajectory_controller'
        moveit_launch_args['use_fake_hardware'] = use_fake
        print("Using Fake Robot")


    # Include UR Control Launch
    ur_control_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('ur_robot_driver'), 'launch', 'ur_control.launch.py'
            ])
        ),
        launch_arguments=ur_control_launch_args.items(),
    )

    # Define MoveIt server launch with a delay
    moveit_launch = TimerAction(
        period=2.0,  # Delay to allow the UR control to start first
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    PathJoinSubstitution([
                        FindPackageShare('ur_moveit_config'), 'launch', 'ur_moveit.launch.py'
                    ])
                ),
                launch_arguments=moveit_launch_args.items(),
            ),
        ]
    )

    moveit_node = TimerAction(
        period=2.0,  # Delay to allow the UR control to start first
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    PathJoinSubstitution([
                        FindPackageShare('unalive_demo'), 'launch', 'moveit_basic_launch.py'
                    ])
                ),
            ),
        ]
    )

    # Combine all launch descriptions
    launch_description = [
        ur_control_launch,
        moveit_launch,
    ]

    return LaunchDescription(launch_description)