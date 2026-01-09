// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__functions.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosmsg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RosCanMotorTgt_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosmsg::msg::RosCanMotorTgt(_init);
}

void RosCanMotorTgt_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosmsg::msg::RosCanMotorTgt *>(message_memory);
  typed_message->~RosCanMotorTgt();
}

size_t size_function__RosCanMotorTgt__motor(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__RosCanMotorTgt__motor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<rosmsg::msg::MotorInputMsg, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__RosCanMotorTgt__motor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<rosmsg::msg::MotorInputMsg, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__RosCanMotorTgt__motor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rosmsg::msg::MotorInputMsg *>(
    get_const_function__RosCanMotorTgt__motor(untyped_member, index));
  auto & value = *reinterpret_cast<rosmsg::msg::MotorInputMsg *>(untyped_value);
  value = item;
}

void assign_function__RosCanMotorTgt__motor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rosmsg::msg::MotorInputMsg *>(
    get_function__RosCanMotorTgt__motor(untyped_member, index));
  const auto & value = *reinterpret_cast<const rosmsg::msg::MotorInputMsg *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RosCanMotorTgt_message_member_array[1] = {
  {
    "motor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosmsg::msg::MotorInputMsg>(),  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rosmsg::msg::RosCanMotorTgt, motor),  // bytes offset in struct
    nullptr,  // default value
    size_function__RosCanMotorTgt__motor,  // size() function pointer
    get_const_function__RosCanMotorTgt__motor,  // get_const(index) function pointer
    get_function__RosCanMotorTgt__motor,  // get(index) function pointer
    fetch_function__RosCanMotorTgt__motor,  // fetch(index, &value) function pointer
    assign_function__RosCanMotorTgt__motor,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RosCanMotorTgt_message_members = {
  "rosmsg::msg",  // message namespace
  "RosCanMotorTgt",  // message name
  1,  // number of fields
  sizeof(rosmsg::msg::RosCanMotorTgt),
  false,  // has_any_key_member_
  RosCanMotorTgt_message_member_array,  // message members
  RosCanMotorTgt_init_function,  // function to initialize message memory (memory has to be allocated)
  RosCanMotorTgt_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RosCanMotorTgt_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosCanMotorTgt_message_members,
  get_message_typesupport_handle_function,
  &rosmsg__msg__RosCanMotorTgt__get_type_hash,
  &rosmsg__msg__RosCanMotorTgt__get_type_description,
  &rosmsg__msg__RosCanMotorTgt__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rosmsg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosmsg::msg::RosCanMotorTgt>()
{
  return &::rosmsg::msg::rosidl_typesupport_introspection_cpp::RosCanMotorTgt_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosmsg, msg, RosCanMotorTgt)() {
  return &::rosmsg::msg::rosidl_typesupport_introspection_cpp::RosCanMotorTgt_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
