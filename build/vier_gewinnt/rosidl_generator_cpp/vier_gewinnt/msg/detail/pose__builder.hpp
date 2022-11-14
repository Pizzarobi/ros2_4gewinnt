// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__MSG__DETAIL__POSE__BUILDER_HPP_
#define VIER_GEWINNT__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace msg
{

namespace builder
{

class Init_Pose_angular_velocity
{
public:
  explicit Init_Pose_angular_velocity(::vier_gewinnt::msg::Pose & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::msg::Pose angular_velocity(::vier_gewinnt::msg::Pose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::msg::Pose msg_;
};

class Init_Pose_linear_velocity
{
public:
  explicit Init_Pose_linear_velocity(::vier_gewinnt::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity linear_velocity(::vier_gewinnt::msg::Pose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Pose_angular_velocity(msg_);
  }

private:
  ::vier_gewinnt::msg::Pose msg_;
};

class Init_Pose_theta
{
public:
  explicit Init_Pose_theta(::vier_gewinnt::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_velocity theta(::vier_gewinnt::msg::Pose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Pose_linear_velocity(msg_);
  }

private:
  ::vier_gewinnt::msg::Pose msg_;
};

class Init_Pose_y
{
public:
  explicit Init_Pose_y(::vier_gewinnt::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_theta y(::vier_gewinnt::msg::Pose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose_theta(msg_);
  }

private:
  ::vier_gewinnt::msg::Pose msg_;
};

class Init_Pose_x
{
public:
  Init_Pose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_y x(::vier_gewinnt::msg::Pose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose_y(msg_);
  }

private:
  ::vier_gewinnt::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::msg::Pose>()
{
  return vier_gewinnt::msg::builder::Init_Pose_x();
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__MSG__DETAIL__POSE__BUILDER_HPP_
