// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_motor_tgt.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__BUILDER_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosmsg/msg/detail/ros_can_motor_tgt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosmsg
{

namespace msg
{

namespace builder
{

class Init_RosCanMotorTgt_motor
{
public:
  Init_RosCanMotorTgt_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosmsg::msg::RosCanMotorTgt motor(::rosmsg::msg::RosCanMotorTgt::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosmsg::msg::RosCanMotorTgt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosmsg::msg::RosCanMotorTgt>()
{
  return rosmsg::msg::builder::Init_RosCanMotorTgt_motor();
}

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__BUILDER_HPP_
