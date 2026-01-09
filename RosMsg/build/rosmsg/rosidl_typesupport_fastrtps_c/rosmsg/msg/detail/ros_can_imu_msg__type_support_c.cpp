// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice
#include "rosmsg/msg/detail/ros_can_imu_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosmsg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosmsg/msg/detail/ros_can_imu_msg__struct.h"
#include "rosmsg/msg/detail/ros_can_imu_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RosCanImuMsg__ros_msg_type = rosmsg__msg__RosCanImuMsg;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_serialize_rosmsg__msg__RosCanImuMsg(
  const rosmsg__msg__RosCanImuMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: qurd_x
  {
    cdr << ros_message->qurd_x;
  }

  // Field name: qurd_y
  {
    cdr << ros_message->qurd_y;
  }

  // Field name: qurd_z
  {
    cdr << ros_message->qurd_z;
  }

  // Field name: qurd_w
  {
    cdr << ros_message->qurd_w;
  }

  // Field name: gravity_x
  {
    cdr << ros_message->gravity_x;
  }

  // Field name: gravity_y
  {
    cdr << ros_message->gravity_y;
  }

  // Field name: gravity_z
  {
    cdr << ros_message->gravity_z;
  }

  // Field name: ang_roll
  {
    cdr << ros_message->ang_roll;
  }

  // Field name: ang_yaw
  {
    cdr << ros_message->ang_yaw;
  }

  // Field name: ang_pitch
  {
    cdr << ros_message->ang_pitch;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_deserialize_rosmsg__msg__RosCanImuMsg(
  eprosima::fastcdr::Cdr & cdr,
  rosmsg__msg__RosCanImuMsg * ros_message)
{
  // Field name: qurd_x
  {
    cdr >> ros_message->qurd_x;
  }

  // Field name: qurd_y
  {
    cdr >> ros_message->qurd_y;
  }

  // Field name: qurd_z
  {
    cdr >> ros_message->qurd_z;
  }

  // Field name: qurd_w
  {
    cdr >> ros_message->qurd_w;
  }

  // Field name: gravity_x
  {
    cdr >> ros_message->gravity_x;
  }

  // Field name: gravity_y
  {
    cdr >> ros_message->gravity_y;
  }

  // Field name: gravity_z
  {
    cdr >> ros_message->gravity_z;
  }

  // Field name: ang_roll
  {
    cdr >> ros_message->ang_roll;
  }

  // Field name: ang_yaw
  {
    cdr >> ros_message->ang_yaw;
  }

  // Field name: ang_pitch
  {
    cdr >> ros_message->ang_pitch;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t get_serialized_size_rosmsg__msg__RosCanImuMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosCanImuMsg__ros_msg_type * ros_message = static_cast<const _RosCanImuMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: qurd_x
  {
    size_t item_size = sizeof(ros_message->qurd_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: qurd_y
  {
    size_t item_size = sizeof(ros_message->qurd_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: qurd_z
  {
    size_t item_size = sizeof(ros_message->qurd_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: qurd_w
  {
    size_t item_size = sizeof(ros_message->qurd_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_x
  {
    size_t item_size = sizeof(ros_message->gravity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_y
  {
    size_t item_size = sizeof(ros_message->gravity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_z
  {
    size_t item_size = sizeof(ros_message->gravity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_roll
  {
    size_t item_size = sizeof(ros_message->ang_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_yaw
  {
    size_t item_size = sizeof(ros_message->ang_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_pitch
  {
    size_t item_size = sizeof(ros_message->ang_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t max_serialized_size_rosmsg__msg__RosCanImuMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: qurd_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: qurd_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: qurd_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: qurd_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmsg__msg__RosCanImuMsg;
    is_plain =
      (
      offsetof(DataType, ang_pitch) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
bool cdr_serialize_key_rosmsg__msg__RosCanImuMsg(
  const rosmsg__msg__RosCanImuMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: qurd_x
  {
    cdr << ros_message->qurd_x;
  }

  // Field name: qurd_y
  {
    cdr << ros_message->qurd_y;
  }

  // Field name: qurd_z
  {
    cdr << ros_message->qurd_z;
  }

  // Field name: qurd_w
  {
    cdr << ros_message->qurd_w;
  }

  // Field name: gravity_x
  {
    cdr << ros_message->gravity_x;
  }

  // Field name: gravity_y
  {
    cdr << ros_message->gravity_y;
  }

  // Field name: gravity_z
  {
    cdr << ros_message->gravity_z;
  }

  // Field name: ang_roll
  {
    cdr << ros_message->ang_roll;
  }

  // Field name: ang_yaw
  {
    cdr << ros_message->ang_yaw;
  }

  // Field name: ang_pitch
  {
    cdr << ros_message->ang_pitch;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t get_serialized_size_key_rosmsg__msg__RosCanImuMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosCanImuMsg__ros_msg_type * ros_message = static_cast<const _RosCanImuMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: qurd_x
  {
    size_t item_size = sizeof(ros_message->qurd_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: qurd_y
  {
    size_t item_size = sizeof(ros_message->qurd_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: qurd_z
  {
    size_t item_size = sizeof(ros_message->qurd_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: qurd_w
  {
    size_t item_size = sizeof(ros_message->qurd_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_x
  {
    size_t item_size = sizeof(ros_message->gravity_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_y
  {
    size_t item_size = sizeof(ros_message->gravity_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: gravity_z
  {
    size_t item_size = sizeof(ros_message->gravity_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_roll
  {
    size_t item_size = sizeof(ros_message->ang_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_yaw
  {
    size_t item_size = sizeof(ros_message->ang_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ang_pitch
  {
    size_t item_size = sizeof(ros_message->ang_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosmsg
size_t max_serialized_size_key_rosmsg__msg__RosCanImuMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: qurd_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: qurd_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: qurd_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: qurd_w
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: gravity_z
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_roll
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_yaw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ang_pitch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosmsg__msg__RosCanImuMsg;
    is_plain =
      (
      offsetof(DataType, ang_pitch) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RosCanImuMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const rosmsg__msg__RosCanImuMsg * ros_message = static_cast<const rosmsg__msg__RosCanImuMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_rosmsg__msg__RosCanImuMsg(ros_message, cdr);
}

static bool _RosCanImuMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  rosmsg__msg__RosCanImuMsg * ros_message = static_cast<rosmsg__msg__RosCanImuMsg *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_rosmsg__msg__RosCanImuMsg(cdr, ros_message);
}

static uint32_t _RosCanImuMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosmsg__msg__RosCanImuMsg(
      untyped_ros_message, 0));
}

static size_t _RosCanImuMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosmsg__msg__RosCanImuMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosCanImuMsg = {
  "rosmsg::msg",
  "RosCanImuMsg",
  _RosCanImuMsg__cdr_serialize,
  _RosCanImuMsg__cdr_deserialize,
  _RosCanImuMsg__get_serialized_size,
  _RosCanImuMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RosCanImuMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosCanImuMsg,
  get_message_typesupport_handle_function,
  &rosmsg__msg__RosCanImuMsg__get_type_hash,
  &rosmsg__msg__RosCanImuMsg__get_type_description,
  &rosmsg__msg__RosCanImuMsg__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosmsg, msg, RosCanImuMsg)() {
  return &_RosCanImuMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
