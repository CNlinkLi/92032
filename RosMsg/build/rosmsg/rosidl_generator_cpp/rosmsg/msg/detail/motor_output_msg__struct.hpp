// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosmsg:msg/MotorOutputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_output_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__STRUCT_HPP_
#define ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosmsg__msg__MotorOutputMsg __attribute__((deprecated))
#else
# define DEPRECATED__rosmsg__msg__MotorOutputMsg __declspec(deprecated)
#endif

namespace rosmsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorOutputMsg_
{
  using Type = MotorOutputMsg_<ContainerAllocator>;

  explicit MotorOutputMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_pos = 0.0f;
      this->curr_torq = 0.0f;
      this->curr_speed = 0.0f;
      this->curr_kp = 0.0f;
      this->curr_kd = 0.0f;
    }
  }

  explicit MotorOutputMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_pos = 0.0f;
      this->curr_torq = 0.0f;
      this->curr_speed = 0.0f;
      this->curr_kp = 0.0f;
      this->curr_kd = 0.0f;
    }
  }

  // field types and members
  using _curr_pos_type =
    float;
  _curr_pos_type curr_pos;
  using _curr_torq_type =
    float;
  _curr_torq_type curr_torq;
  using _curr_speed_type =
    float;
  _curr_speed_type curr_speed;
  using _curr_kp_type =
    float;
  _curr_kp_type curr_kp;
  using _curr_kd_type =
    float;
  _curr_kd_type curr_kd;

  // setters for named parameter idiom
  Type & set__curr_pos(
    const float & _arg)
  {
    this->curr_pos = _arg;
    return *this;
  }
  Type & set__curr_torq(
    const float & _arg)
  {
    this->curr_torq = _arg;
    return *this;
  }
  Type & set__curr_speed(
    const float & _arg)
  {
    this->curr_speed = _arg;
    return *this;
  }
  Type & set__curr_kp(
    const float & _arg)
  {
    this->curr_kp = _arg;
    return *this;
  }
  Type & set__curr_kd(
    const float & _arg)
  {
    this->curr_kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosmsg::msg::MotorOutputMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosmsg::msg::MotorOutputMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::MotorOutputMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::MotorOutputMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosmsg__msg__MotorOutputMsg
    std::shared_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosmsg__msg__MotorOutputMsg
    std::shared_ptr<rosmsg::msg::MotorOutputMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorOutputMsg_ & other) const
  {
    if (this->curr_pos != other.curr_pos) {
      return false;
    }
    if (this->curr_torq != other.curr_torq) {
      return false;
    }
    if (this->curr_speed != other.curr_speed) {
      return false;
    }
    if (this->curr_kp != other.curr_kp) {
      return false;
    }
    if (this->curr_kd != other.curr_kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorOutputMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorOutputMsg_

// alias to use template instance with default allocator
using MotorOutputMsg =
  rosmsg::msg::MotorOutputMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__STRUCT_HPP_
