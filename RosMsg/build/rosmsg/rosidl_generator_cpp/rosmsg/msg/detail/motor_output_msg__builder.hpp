// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosmsg:msg/MotorOutputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_output_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__BUILDER_HPP_
#define ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosmsg/msg/detail/motor_output_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosmsg
{

namespace msg
{

namespace builder
{

class Init_MotorOutputMsg_curr_kd
{
public:
  explicit Init_MotorOutputMsg_curr_kd(::rosmsg::msg::MotorOutputMsg & msg)
  : msg_(msg)
  {}
  ::rosmsg::msg::MotorOutputMsg curr_kd(::rosmsg::msg::MotorOutputMsg::_curr_kd_type arg)
  {
    msg_.curr_kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosmsg::msg::MotorOutputMsg msg_;
};

class Init_MotorOutputMsg_curr_kp
{
public:
  explicit Init_MotorOutputMsg_curr_kp(::rosmsg::msg::MotorOutputMsg & msg)
  : msg_(msg)
  {}
  Init_MotorOutputMsg_curr_kd curr_kp(::rosmsg::msg::MotorOutputMsg::_curr_kp_type arg)
  {
    msg_.curr_kp = std::move(arg);
    return Init_MotorOutputMsg_curr_kd(msg_);
  }

private:
  ::rosmsg::msg::MotorOutputMsg msg_;
};

class Init_MotorOutputMsg_curr_speed
{
public:
  explicit Init_MotorOutputMsg_curr_speed(::rosmsg::msg::MotorOutputMsg & msg)
  : msg_(msg)
  {}
  Init_MotorOutputMsg_curr_kp curr_speed(::rosmsg::msg::MotorOutputMsg::_curr_speed_type arg)
  {
    msg_.curr_speed = std::move(arg);
    return Init_MotorOutputMsg_curr_kp(msg_);
  }

private:
  ::rosmsg::msg::MotorOutputMsg msg_;
};

class Init_MotorOutputMsg_curr_torq
{
public:
  explicit Init_MotorOutputMsg_curr_torq(::rosmsg::msg::MotorOutputMsg & msg)
  : msg_(msg)
  {}
  Init_MotorOutputMsg_curr_speed curr_torq(::rosmsg::msg::MotorOutputMsg::_curr_torq_type arg)
  {
    msg_.curr_torq = std::move(arg);
    return Init_MotorOutputMsg_curr_speed(msg_);
  }

private:
  ::rosmsg::msg::MotorOutputMsg msg_;
};

class Init_MotorOutputMsg_curr_pos
{
public:
  Init_MotorOutputMsg_curr_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorOutputMsg_curr_torq curr_pos(::rosmsg::msg::MotorOutputMsg::_curr_pos_type arg)
  {
    msg_.curr_pos = std::move(arg);
    return Init_MotorOutputMsg_curr_torq(msg_);
  }

private:
  ::rosmsg::msg::MotorOutputMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosmsg::msg::MotorOutputMsg>()
{
  return rosmsg::msg::builder::Init_MotorOutputMsg_curr_pos();
}

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__BUILDER_HPP_
