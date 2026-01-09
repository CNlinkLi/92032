// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosmsg/msg/detail/ros_can_motor_tgt__rosidl_typesupport_introspection_c.h"
#include "rosmsg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__functions.h"
#include "rosmsg/msg/detail/ros_can_motor_tgt__struct.h"


// Include directives for member types
// Member `motor`
#include "rosmsg/msg/motor_input_msg.h"
// Member `motor`
#include "rosmsg/msg/detail/motor_input_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosmsg__msg__RosCanMotorTgt__init(message_memory);
}

void rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_fini_function(void * message_memory)
{
  rosmsg__msg__RosCanMotorTgt__fini(message_memory);
}

size_t rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__size_function__RosCanMotorTgt__motor(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__get_const_function__RosCanMotorTgt__motor(
  const void * untyped_member, size_t index)
{
  const rosmsg__msg__MotorInputMsg * member =
    (const rosmsg__msg__MotorInputMsg *)(untyped_member);
  return &member[index];
}

void * rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__get_function__RosCanMotorTgt__motor(
  void * untyped_member, size_t index)
{
  rosmsg__msg__MotorInputMsg * member =
    (rosmsg__msg__MotorInputMsg *)(untyped_member);
  return &member[index];
}

void rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__fetch_function__RosCanMotorTgt__motor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosmsg__msg__MotorInputMsg * item =
    ((const rosmsg__msg__MotorInputMsg *)
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__get_const_function__RosCanMotorTgt__motor(untyped_member, index));
  rosmsg__msg__MotorInputMsg * value =
    (rosmsg__msg__MotorInputMsg *)(untyped_value);
  *value = *item;
}

void rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__assign_function__RosCanMotorTgt__motor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosmsg__msg__MotorInputMsg * item =
    ((rosmsg__msg__MotorInputMsg *)
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__get_function__RosCanMotorTgt__motor(untyped_member, index));
  const rosmsg__msg__MotorInputMsg * value =
    (const rosmsg__msg__MotorInputMsg *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_member_array[1] = {
  {
    "motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rosmsg__msg__RosCanMotorTgt, motor),  // bytes offset in struct
    NULL,  // default value
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__size_function__RosCanMotorTgt__motor,  // size() function pointer
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__get_const_function__RosCanMotorTgt__motor,  // get_const(index) function pointer
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__get_function__RosCanMotorTgt__motor,  // get(index) function pointer
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__fetch_function__RosCanMotorTgt__motor,  // fetch(index, &value) function pointer
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__assign_function__RosCanMotorTgt__motor,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_members = {
  "rosmsg__msg",  // message namespace
  "RosCanMotorTgt",  // message name
  1,  // number of fields
  sizeof(rosmsg__msg__RosCanMotorTgt),
  false,  // has_any_key_member_
  rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_member_array,  // message members
  rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_init_function,  // function to initialize message memory (memory has to be allocated)
  rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_type_support_handle = {
  0,
  &rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_members,
  get_message_typesupport_handle_function,
  &rosmsg__msg__RosCanMotorTgt__get_type_hash,
  &rosmsg__msg__RosCanMotorTgt__get_type_description,
  &rosmsg__msg__RosCanMotorTgt__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosmsg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosmsg, msg, RosCanMotorTgt)() {
  rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosmsg, msg, MotorInputMsg)();
  if (!rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_type_support_handle.typesupport_identifier) {
    rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosmsg__msg__RosCanMotorTgt__rosidl_typesupport_introspection_c__RosCanMotorTgt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
