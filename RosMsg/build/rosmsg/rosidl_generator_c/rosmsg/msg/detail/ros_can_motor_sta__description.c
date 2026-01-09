// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosmsg:msg/RosCanMotorSta.idl
// generated code does not contain a copyright notice

#include "rosmsg/msg/detail/ros_can_motor_sta__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_type_hash_t *
rosmsg__msg__RosCanMotorSta__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x63, 0xa0, 0x7e, 0x12, 0x51, 0xd7, 0x83,
      0xc9, 0x21, 0x17, 0x0d, 0x25, 0x9f, 0x3c, 0x61,
      0x1e, 0x9b, 0xde, 0x24, 0xe9, 0x4a, 0x9d, 0x94,
      0x2f, 0x92, 0x9a, 0x89, 0x0e, 0xe3, 0xeb, 0xb9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rosmsg/msg/detail/motor_output_msg__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rosmsg__msg__MotorOutputMsg__EXPECTED_HASH = {1, {
    0x92, 0x66, 0x8c, 0xd5, 0x41, 0xf0, 0x37, 0x55,
    0x5c, 0xd4, 0x10, 0x40, 0xc6, 0x94, 0x2d, 0xd9,
    0xf6, 0x4f, 0x90, 0x37, 0x2c, 0xcc, 0x55, 0xee,
    0x67, 0x16, 0x5d, 0x1a, 0x66, 0x18, 0x4c, 0x73,
  }};
#endif

static char rosmsg__msg__RosCanMotorSta__TYPE_NAME[] = "rosmsg/msg/RosCanMotorSta";
static char rosmsg__msg__MotorOutputMsg__TYPE_NAME[] = "rosmsg/msg/MotorOutputMsg";

// Define type names, field names, and default values
static char rosmsg__msg__RosCanMotorSta__FIELD_NAME__motor[] = "motor";

static rosidl_runtime_c__type_description__Field rosmsg__msg__RosCanMotorSta__FIELDS[] = {
  {
    {rosmsg__msg__RosCanMotorSta__FIELD_NAME__motor, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {rosmsg__msg__MotorOutputMsg__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosmsg__msg__RosCanMotorSta__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rosmsg__msg__MotorOutputMsg__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosmsg__msg__RosCanMotorSta__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosmsg__msg__RosCanMotorSta__TYPE_NAME, 25, 25},
      {rosmsg__msg__RosCanMotorSta__FIELDS, 1, 1},
    },
    {rosmsg__msg__RosCanMotorSta__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rosmsg__msg__MotorOutputMsg__EXPECTED_HASH, rosmsg__msg__MotorOutputMsg__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rosmsg__msg__MotorOutputMsg__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "MotorOutputMsg[2] motor\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosmsg__msg__RosCanMotorSta__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosmsg__msg__RosCanMotorSta__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmsg__msg__RosCanMotorSta__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosmsg__msg__RosCanMotorSta__get_individual_type_description_source(NULL),
    sources[1] = *rosmsg__msg__MotorOutputMsg__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
