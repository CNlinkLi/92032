// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

#include "rosmsg/msg/detail/ros_can_imu_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_type_hash_t *
rosmsg__msg__RosCanImuMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x58, 0x3f, 0xd2, 0x98, 0x68, 0x36, 0xb2,
      0x9b, 0xdb, 0x3b, 0x4c, 0x40, 0x8a, 0x8e, 0x21,
      0xf8, 0xf1, 0x5b, 0x8a, 0x0a, 0x7a, 0x24, 0x97,
      0xe1, 0xfd, 0xad, 0x51, 0x6e, 0xc5, 0x91, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rosmsg__msg__RosCanImuMsg__TYPE_NAME[] = "rosmsg/msg/RosCanImuMsg";

// Define type names, field names, and default values
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_x[] = "qurd_x";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_y[] = "qurd_y";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_z[] = "qurd_z";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_w[] = "qurd_w";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__gravity_x[] = "gravity_x";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__gravity_y[] = "gravity_y";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__gravity_z[] = "gravity_z";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__ang_roll[] = "ang_roll";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__ang_yaw[] = "ang_yaw";
static char rosmsg__msg__RosCanImuMsg__FIELD_NAME__ang_pitch[] = "ang_pitch";

static rosidl_runtime_c__type_description__Field rosmsg__msg__RosCanImuMsg__FIELDS[] = {
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__qurd_w, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__gravity_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__gravity_y, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__gravity_z, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__ang_roll, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__ang_yaw, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rosmsg__msg__RosCanImuMsg__FIELD_NAME__ang_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosmsg__msg__RosCanImuMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosmsg__msg__RosCanImuMsg__TYPE_NAME, 23, 23},
      {rosmsg__msg__RosCanImuMsg__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 qurd_x\n"
  "float32 qurd_y\n"
  "float32 qurd_z\n"
  "float32 qurd_w\n"
  "float32 gravity_x\n"
  "float32 gravity_y\n"
  "float32 gravity_z\n"
  "float32 ang_roll\n"
  "float32 ang_yaw\n"
  "float32 ang_pitch\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosmsg__msg__RosCanImuMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosmsg__msg__RosCanImuMsg__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 167, 167},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmsg__msg__RosCanImuMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosmsg__msg__RosCanImuMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
