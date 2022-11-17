cmake_minimum_required(VERSION 3.8)
project(vier_gewinnt)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(Qt5 REQUIRED COMPONENTS Widgets)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)


include_directories(include ${Qt5Widgets_INCLUDE_DIRS})
include_directories(include /home/uli/repo/ros2_4gewinnt)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/RotateAbsolute.action"
  "msg/Color.msg"
  "msg/Pose.msg"
  "srv/Kill.srv"
  "srv/SetPen.srv"
  "srv/Spawn.srv"
  "srv/TeleportAbsolute.srv"
  "srv/TeleportRelative.srv")

set(dependencies "ament_index_cpp" "geometry_msgs" "rclcpp" "rclcpp_action" "std_msgs" "std_srvs")

set(vier_gewinnt_node_SRCS
  src/turtlesim.cpp
  src/turtle.cpp
  src/turtle_frame.cpp
)
set(vier_gewinnt_node_HDRS
  include/vier_gewinnt/turtle_frame.h
)

qt5_wrap_cpp(vier_gewinnt_node_MOCS ${vier_gewinnt_node_HDRS})

rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")

add_executable(vier_gewinnt_node ${vier_gewinnt_node_SRCS} ${vier_gewinnt_node_MOCS})
target_link_libraries(vier_gewinnt_node Qt5::Widgets)
ament_target_dependencies(vier_gewinnt_node ${dependencies})
target_link_libraries(vier_gewinnt_node "${cpp_typesupport_target}")

add_executable(mover src/mv.cpp)
ament_target_dependencies(mover ${dependencies})
target_link_libraries(mover "${cpp_typesupport_target}")

add_executable(player src/publisher_member_function.cpp)
ament_target_dependencies(player rclcpp std_msgs)

add_executable(gamecontroller src/subscriber_member_function.cpp)
ament_target_dependencies(gamecontroller rclcpp std_msgs ${dependencies})
# target_link_libraries(listener "${cpp_typesupport_target}")

add_executable(init src/init.cpp)

install(TARGETS
  init vier_gewinnt_node player gamecontroller mover
  DESTINATION lib/${PROJECT_NAME})
  
  
install(DIRECTORY images
  DESTINATION share/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.png" PATTERN "*.svg")

# install(DIRECTORY launch
#   DESTINATION share/${PROJECT_NAME})


ament_package()
