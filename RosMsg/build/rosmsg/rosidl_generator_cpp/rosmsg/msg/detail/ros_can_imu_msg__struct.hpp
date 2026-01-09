// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_imu_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__STRUCT_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosmsg__msg__RosCanImuMsg __attribute__((deprecated))
#else
# define DEPRECATED__rosmsg__msg__RosCanImuMsg __declspec(deprecated)
#endif

namespace rosmsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosCanImuMsg_
{
  using Type = RosCanImuMsg_<ContainerAllocator>;

  explicit RosCanImuMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->qurd_x = 0.0f;
      this->qurd_y = 0.0f;
      this->qurd_z = 0.0f;
      this->qurd_w = 0.0f;
      this->gravity_x = 0.0f;
      this->gravity_y = 0.0f;
      this->gravity_z = 0.0f;
      this->ang_roll = 0.0f;
      this->ang_yaw = 0.0f;
      this->ang_pitch = 0.0f;
    }
  }

  explicit RosCanImuMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->qurd_x = 0.0f;
      this->qurd_y = 0.0f;
      this->qurd_z = 0.0f;
      this->qurd_w = 0.0f;
      this->gravity_x = 0.0f;
      this->gravity_y = 0.0f;
      this->gravity_z = 0.0f;
      this->ang_roll = 0.0f;
      this->ang_yaw = 0.0f;
      this->ang_pitch = 0.0f;
    }
  }

  // field types and members
  using _qurd_x_type =
    float;
  _qurd_x_type qurd_x;
  using _qurd_y_type =
    float;
  _qurd_y_type qurd_y;
  using _qurd_z_type =
    float;
  _qurd_z_type qurd_z;
  using _qurd_w_type =
    float;
  _qurd_w_type qurd_w;
  using _gravity_x_type =
    float;
  _gravity_x_type gravity_x;
  using _gravity_y_type =
    float;
  _gravity_y_type gravity_y;
  using _gravity_z_type =
    float;
  _gravity_z_type gravity_z;
  using _ang_roll_type =
    float;
  _ang_roll_type ang_roll;
  using _ang_yaw_type =
    float;
  _ang_yaw_type ang_yaw;
  using _ang_pitch_type =
    float;
  _ang_pitch_type ang_pitch;

  // setters for named parameter idiom
  Type & set__qurd_x(
    const float & _arg)
  {
    this->qurd_x = _arg;
    return *this;
  }
  Type & set__qurd_y(
    const float & _arg)
  {
    this->qurd_y = _arg;
    return *this;
  }
  Type & set__qurd_z(
    const float & _arg)
  {
    this->qurd_z = _arg;
    return *this;
  }
  Type & set__qurd_w(
    const float & _arg)
  {
    this->qurd_w = _arg;
    return *this;
  }
  Type & set__gravity_x(
    const float & _arg)
  {
    this->gravity_x = _arg;
    return *this;
  }
  Type & set__gravity_y(
    const float & _arg)
  {
    this->gravity_y = _arg;
    return *this;
  }
  Type & set__gravity_z(
    const float & _arg)
  {
    this->gravity_z = _arg;
    return *this;
  }
  Type & set__ang_roll(
    const float & _arg)
  {
    this->ang_roll = _arg;
    return *this;
  }
  Type & set__ang_yaw(
    const float & _arg)
  {
    this->ang_yaw = _arg;
    return *this;
  }
  Type & set__ang_pitch(
    const float & _arg)
  {
    this->ang_pitch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosmsg::msg::RosCanImuMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosmsg::msg::RosCanImuMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::RosCanImuMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::RosCanImuMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosmsg__msg__RosCanImuMsg
    std::shared_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosmsg__msg__RosCanImuMsg
    std::shared_ptr<rosmsg::msg::RosCanImuMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosCanImuMsg_ & other) const
  {
    if (this->qurd_x != other.qurd_x) {
      return false;
    }
    if (this->qurd_y != other.qurd_y) {
      return false;
    }
    if (this->qurd_z != other.qurd_z) {
      return false;
    }
    if (this->qurd_w != other.qurd_w) {
      return false;
    }
    if (this->gravity_x != other.gravity_x) {
      return false;
    }
    if (this->gravity_y != other.gravity_y) {
      return false;
    }
    if (this->gravity_z != other.gravity_z) {
      return false;
    }
    if (this->ang_roll != other.ang_roll) {
      return false;
    }
    if (this->ang_yaw != other.ang_yaw) {
      return false;
    }
    if (this->ang_pitch != other.ang_pitch) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosCanImuMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosCanImuMsg_

// alias to use template instance with default allocator
using RosCanImuMsg =
  rosmsg::msg::RosCanImuMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__STRUCT_HPP_
