// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_input_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__BUILDER_HPP_
#define ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosmsg/msg/detail/motor_input_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosmsg
{

namespace msg
{

namespace builder
{

class Init_MotorInputMsg_tgt_kp
{
public:
  explicit Init_MotorInputMsg_tgt_kp(::rosmsg::msg::MotorInputMsg & msg)
  : msg_(msg)
  {}
  ::rosmsg::msg::MotorInputMsg tgt_kp(::rosmsg::msg::MotorInputMsg::_tgt_kp_type arg)
  {
    msg_.tgt_kp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosmsg::msg::MotorInputMsg msg_;
};

class Init_MotorInputMsg_tgt_kd
{
public:
  explicit Init_MotorInputMsg_tgt_kd(::rosmsg::msg::MotorInputMsg & msg)
  : msg_(msg)
  {}
  Init_MotorInputMsg_tgt_kp tgt_kd(::rosmsg::msg::MotorInputMsg::_tgt_kd_type arg)
  {
    msg_.tgt_kd = std::move(arg);
    return Init_MotorInputMsg_tgt_kp(msg_);
  }

private:
  ::rosmsg::msg::MotorInputMsg msg_;
};

class Init_MotorInputMsg_tgt_speed
{
public:
  explicit Init_MotorInputMsg_tgt_speed(::rosmsg::msg::MotorInputMsg & msg)
  : msg_(msg)
  {}
  Init_MotorInputMsg_tgt_kd tgt_speed(::rosmsg::msg::MotorInputMsg::_tgt_speed_type arg)
  {
    msg_.tgt_speed = std::move(arg);
    return Init_MotorInputMsg_tgt_kd(msg_);
  }

private:
  ::rosmsg::msg::MotorInputMsg msg_;
};

class Init_MotorInputMsg_tgt_torq
{
public:
  explicit Init_MotorInputMsg_tgt_torq(::rosmsg::msg::MotorInputMsg & msg)
  : msg_(msg)
  {}
  Init_MotorInputMsg_tgt_speed tgt_torq(::rosmsg::msg::MotorInputMsg::_tgt_torq_type arg)
  {
    msg_.tgt_torq = std::move(arg);
    return Init_MotorInputMsg_tgt_speed(msg_);
  }

private:
  ::rosmsg::msg::MotorInputMsg msg_;
};

class Init_MotorInputMsg_tgt_pos
{
public:
  Init_MotorInputMsg_tgt_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorInputMsg_tgt_torq tgt_pos(::rosmsg::msg::MotorInputMsg::_tgt_pos_type arg)
  {
    msg_.tgt_pos = std::move(arg);
    return Init_MotorInputMsg_tgt_torq(msg_);
  }

private:
  ::rosmsg::msg::MotorInputMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosmsg::msg::MotorInputMsg>()
{
  return rosmsg::msg::builder::Init_MotorInputMsg_tgt_pos();
}

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__BUILDER_HPP_
