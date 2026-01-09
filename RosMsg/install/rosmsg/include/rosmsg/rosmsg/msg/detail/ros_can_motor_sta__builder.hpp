// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosmsg:msg/RosCanMotorSta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_motor_sta.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__BUILDER_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosmsg/msg/detail/ros_can_motor_sta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosmsg
{

namespace msg
{

namespace builder
{

class Init_RosCanMotorSta_motor
{
public:
  Init_RosCanMotorSta_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosmsg::msg::RosCanMotorSta motor(::rosmsg::msg::RosCanMotorSta::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosmsg::msg::RosCanMotorSta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosmsg::msg::RosCanMotorSta>()
{
  return rosmsg::msg::builder::Init_RosCanMotorSta_motor();
}

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_STA__BUILDER_HPP_
