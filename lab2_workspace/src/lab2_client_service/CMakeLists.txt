cmake_minimum_required(VERSION 3.5)
project(lab2_client_service)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(my_interface REQUIRED)

add_executable(int_addition_server src/int_addition_server.cpp)
add_executable(int_addition_client src/int_addition_client.cpp)
add_executable(lookup_server src/lookup_server.cpp)

ament_target_dependencies(int_addition_server rclcpp example_interfaces)
ament_target_dependencies(int_addition_client rclcpp example_interfaces)
ament_target_dependencies(lookup_server rclcpp my_interface tf2_ros geometry_msgs tf2)

install(TARGETS
  int_addition_server
  int_addition_client
  lookup_server
  DESTINATION lib/${PROJECT_NAME})

ament_package()
