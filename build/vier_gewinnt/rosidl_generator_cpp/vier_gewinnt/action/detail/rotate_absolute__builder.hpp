// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vier_gewinnt:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__BUILDER_HPP_
#define VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vier_gewinnt/action/detail/rotate_absolute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_Goal_theta
{
public:
  Init_RotateAbsolute_Goal_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vier_gewinnt::action::RotateAbsolute_Goal theta(::vier_gewinnt::action::RotateAbsolute_Goal::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_Goal>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_Goal_theta();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_Result_delta
{
public:
  Init_RotateAbsolute_Result_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vier_gewinnt::action::RotateAbsolute_Result delta(::vier_gewinnt::action::RotateAbsolute_Result::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_Result>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_Result_delta();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_Feedback_remaining
{
public:
  Init_RotateAbsolute_Feedback_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vier_gewinnt::action::RotateAbsolute_Feedback remaining(::vier_gewinnt::action::RotateAbsolute_Feedback::_remaining_type arg)
  {
    msg_.remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_Feedback>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_Feedback_remaining();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_SendGoal_Request_goal
{
public:
  explicit Init_RotateAbsolute_SendGoal_Request_goal(::vier_gewinnt::action::RotateAbsolute_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::action::RotateAbsolute_SendGoal_Request goal(::vier_gewinnt::action::RotateAbsolute_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_SendGoal_Request msg_;
};

class Init_RotateAbsolute_SendGoal_Request_goal_id
{
public:
  Init_RotateAbsolute_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_SendGoal_Request_goal goal_id(::vier_gewinnt::action::RotateAbsolute_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RotateAbsolute_SendGoal_Request_goal(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_SendGoal_Request>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_SendGoal_Request_goal_id();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_SendGoal_Response_stamp
{
public:
  explicit Init_RotateAbsolute_SendGoal_Response_stamp(::vier_gewinnt::action::RotateAbsolute_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::action::RotateAbsolute_SendGoal_Response stamp(::vier_gewinnt::action::RotateAbsolute_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_SendGoal_Response msg_;
};

class Init_RotateAbsolute_SendGoal_Response_accepted
{
public:
  Init_RotateAbsolute_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_SendGoal_Response_stamp accepted(::vier_gewinnt::action::RotateAbsolute_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RotateAbsolute_SendGoal_Response_stamp(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_SendGoal_Response>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_SendGoal_Response_accepted();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_GetResult_Request_goal_id
{
public:
  Init_RotateAbsolute_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vier_gewinnt::action::RotateAbsolute_GetResult_Request goal_id(::vier_gewinnt::action::RotateAbsolute_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_GetResult_Request>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_GetResult_Request_goal_id();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_GetResult_Response_result
{
public:
  explicit Init_RotateAbsolute_GetResult_Response_result(::vier_gewinnt::action::RotateAbsolute_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::action::RotateAbsolute_GetResult_Response result(::vier_gewinnt::action::RotateAbsolute_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_GetResult_Response msg_;
};

class Init_RotateAbsolute_GetResult_Response_status
{
public:
  Init_RotateAbsolute_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_GetResult_Response_result status(::vier_gewinnt::action::RotateAbsolute_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RotateAbsolute_GetResult_Response_result(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_GetResult_Response>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_GetResult_Response_status();
}

}  // namespace vier_gewinnt


namespace vier_gewinnt
{

namespace action
{

namespace builder
{

class Init_RotateAbsolute_FeedbackMessage_feedback
{
public:
  explicit Init_RotateAbsolute_FeedbackMessage_feedback(::vier_gewinnt::action::RotateAbsolute_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::vier_gewinnt::action::RotateAbsolute_FeedbackMessage feedback(::vier_gewinnt::action::RotateAbsolute_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_FeedbackMessage msg_;
};

class Init_RotateAbsolute_FeedbackMessage_goal_id
{
public:
  Init_RotateAbsolute_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAbsolute_FeedbackMessage_feedback goal_id(::vier_gewinnt::action::RotateAbsolute_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RotateAbsolute_FeedbackMessage_feedback(msg_);
  }

private:
  ::vier_gewinnt::action::RotateAbsolute_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::vier_gewinnt::action::RotateAbsolute_FeedbackMessage>()
{
  return vier_gewinnt::action::builder::Init_RotateAbsolute_FeedbackMessage_goal_id();
}

}  // namespace vier_gewinnt

#endif  // VIER_GEWINNT__ACTION__DETAIL__ROTATE_ABSOLUTE__BUILDER_HPP_
