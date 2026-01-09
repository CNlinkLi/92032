// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_motor_tgt.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__STRUCT_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motor'
#include "rosmsg/msg/detail/motor_input_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosmsg__msg__RosCanMotorTgt __attribute__((deprecated))
#else
# define DEPRECATED__rosmsg__msg__RosCanMotorTgt __declspec(deprecated)
#endif

namespace rosmsg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosCanMotorTgt_
{
  using Type = RosCanMotorTgt_<ContainerAllocator>;

  explicit RosCanMotorTgt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor.fill(rosmsg::msg::MotorInputMsg_<ContainerAllocator>{_init});
    }
  }

  explicit RosCanMotorTgt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor.fill(rosmsg::msg::MotorInputMsg_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _motor_type =
    std::array<rosmsg::msg::MotorInputMsg_<ContainerAllocator>, 2>;
  _motor_type motor;

  // setters for named parameter idiom
  Type & set__motor(
    const std::array<rosmsg::msg::MotorInputMsg_<ContainerAllocator>, 2> & _arg)
  {
    this->motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosmsg::msg::RosCanMotorTgt_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosmsg::msg::RosCanMotorTgt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::RosCanMotorTgt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosmsg::msg::RosCanMotorTgt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosmsg__msg__RosCanMotorTgt
    std::shared_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosmsg__msg__RosCanMotorTgt
    std::shared_ptr<rosmsg::msg::RosCanMotorTgt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosCanMotorTgt_ & other) const
  {
    if (this->motor != other.motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosCanMotorTgt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosCanMotorTgt_

// alias to use template instance with default allocator
using RosCanMotorTgt =
  rosmsg::msg::RosCanMotorTgt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosmsg

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_MOTOR_TGT__STRUCT_HPP_
