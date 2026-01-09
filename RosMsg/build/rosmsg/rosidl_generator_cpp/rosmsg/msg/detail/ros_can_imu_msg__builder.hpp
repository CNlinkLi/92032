// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_imu_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__BUILDER_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosmsg/msg/detail/ros_can_imu_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosmsg
{

namespace msg
{

namespace builder
{

class Init_RosCanImuMsg_ang_pitch
{
public:
  explicit Init_RosCanImuMsg_ang_pitch(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  ::rosmsg::msg::RosCanImuMsg ang_pitch(::rosmsg::msg::RosCanImuMsg::_ang_pitch_type arg)
  {
    msg_.ang_pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_ang_yaw
{
public:
  explicit Init_RosCanImuMsg_ang_yaw(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_ang_pitch ang_yaw(::rosmsg::msg::RosCanImuMsg::_ang_yaw_type arg)
  {
    msg_.ang_yaw = std::move(arg);
    return Init_RosCanImuMsg_ang_pitch(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_ang_roll
{
public:
  explicit Init_RosCanImuMsg_ang_roll(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_ang_yaw ang_roll(::rosmsg::msg::RosCanImuMsg::_ang_roll_type arg)
  {
    msg_.ang_roll = std::move(arg);
    return Init_RosCanImuMsg_ang_yaw(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_gravity_z
{
public:
  explicit Init_RosCanImuMsg_gravity_z(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_ang_roll gravity_z(::rosmsg::msg::RosCanImuMsg::_gravity_z_type arg)
  {
    msg_.gravity_z = std::move(arg);
    return Init_RosCanImuMsg_ang_roll(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_gravity_y
{
public:
  explicit Init_RosCanImuMsg_gravity_y(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_gravity_z gravity_y(::rosmsg::msg::RosCanImuMsg::_gravity_y_type arg)
  {
    msg_.gravity_y = std::move(arg);
    return Init_RosCanImuMsg_gravity_z(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_gravity_x
{
public:
  explicit Init_RosCanImuMsg_gravity_x(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_gravity_y gravity_x(::rosmsg::msg::RosCanImuMsg::_gravity_x_type arg)
  {
    msg_.gravity_x = std::move(arg);
    return Init_RosCanImuMsg_gravity_y(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_qurd_w
{
public:
  explicit Init_RosCanImuMsg_qurd_w(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_gravity_x qurd_w(::rosmsg::msg::RosCanImuMsg::_qurd_w_type arg)
  {
    msg_.qurd_w = std::move(arg);
    return Init_RosCanImuMsg_gravity_x(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_qurd_z
{
public:
  explicit Init_RosCanImuMsg_qurd_z(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_qurd_w qurd_z(::rosmsg::msg::RosCanImuMsg::_qurd_z_type arg)
  {
    msg_.qurd_z = std::move(arg);
    return Init_RosCanImuMsg_qurd_w(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_qurd_y
{
public:
  explicit Init_RosCanImuMsg_qurd_y(::rosmsg::msg::RosCanImuMsg & msg)
  : msg_(msg)
  {}
  Init_RosCanImuMsg_qurd_z qurd_y(::rosmsg::msg::RosCanImuMsg::_qurd_y_type arg)
  {
    msg_.qurd_y = std::move(arg);
    return Init_RosCanImuMsg_qurd_z(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

class Init_RosCanImuMsg_qurd_x
{
public:
  Init_RosCanImuMsg_qurd_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosCanImuMsg_qurd_y qurd_x(::rosmsg::msg::RosCanImuMsg::_qurd_x_type arg)
  {
    msg_.qurd_x = std::move(arg);
    return Init_RosCanImuMsg_qurd_y(msg_);
  }

private:
  ::rosmsg::msg::RosCanImuMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosmsg::msg::RosCanImuMsg>()
{
  return rosmsg::msg::builder::Init_RosCanImuMsg_qurd_x();
}

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__BUILDER_HPP_
