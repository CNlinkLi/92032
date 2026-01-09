// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosmsg:msg/MotorInputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_input_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__STRUCT_HPP_
#define ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosmsg__msg__MotorInputMsg __attribute__((deprecated))
#else
# define DEPRECATED__rosmsg__msg__MotorInputMsg __declspec(deprecated)
#endif

namespace rosmsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorInputMsg_
{
  using Type = MotorInputMsg_<ContainerAllocator>;

  explicit MotorInputMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tgt_pos = 0.0f;
      this->tgt_torq = 0.0f;
      this->tgt_speed = 0.0f;
      this->tgt_kd = 0.0f;
      this->tgt_kp = 0.0f;
    }
  }

  explicit MotorInputMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tgt_pos = 0.0f;
      this->tgt_torq = 0.0f;
      this->tgt_speed = 0.0f;
      this->tgt_kd = 0.0f;
      this->tgt_kp = 0.0f;
    }
  }

  // field types and members
  using _tgt_pos_type =
    float;
  _tgt_pos_type tgt_pos;
  using _tgt_torq_type =
    float;
  _tgt_torq_type tgt_torq;
  using _tgt_speed_type =
    float;
  _tgt_speed_type tgt_speed;
  using _tgt_kd_type =
    float;
  _tgt_kd_type tgt_kd;
  using _tgt_kp_type =
    float;
  _tgt_kp_type tgt_kp;

  // setters for named parameter idiom
  Type & set__tgt_pos(
    const float & _arg)
  {
    this->tgt_pos = _arg;
    return *this;
  }
  Type & set__tgt_torq(
    const float & _arg)
  {
    this->tgt_torq = _arg;
    return *this;
  }
  Type & set__tgt_speed(
    const float & _arg)
  {
    this->tgt_speed = _arg;
    return *this;
  }
  Type & set__tgt_kd(
    const float & _arg)
  {
    this->tgt_kd = _arg;
    return *this;
  }
  Type & set__tgt_kp(
    const float & _arg)
  {
    this->tgt_kp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosmsg::msg::MotorInputMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosmsg::msg::MotorInputMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::MotorInputMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::MotorInputMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosmsg__msg__MotorInputMsg
    std::shared_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosmsg__msg__MotorInputMsg
    std::shared_ptr<rosmsg::msg::MotorInputMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorInputMsg_ & other) const
  {
    if (this->tgt_pos != other.tgt_pos) {
      return false;
    }
    if (this->tgt_torq != other.tgt_torq) {
      return false;
    }
    if (this->tgt_speed != other.tgt_speed) {
      return false;
    }
    if (this->tgt_kd != other.tgt_kd) {
      return false;
    }
    if (this->tgt_kp != other.tgt_kp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorInputMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorInputMsg_

// alias to use template instance with default allocator
using MotorInputMsg =
  rosmsg::msg::MotorInputMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__MOTOR_INPUT_MSG__STRUCT_HPP_
