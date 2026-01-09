// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosmsg:msg/RosCanMotorTgt.idl
// generated code does not contain a copyright notice

#include "rosmsg/msg/detail/ros_can_motor_tgt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_type_hash_t *
rosmsg__msg__RosCanMotorTgt__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0xac, 0xcb, 0x42, 0xcb, 0x2b, 0x92, 0xaa,
      0x3c, 0xd3, 0xa5, 0x03, 0x45, 0xe4, 0x0d, 0x5d,
      0x10, 0x65, 0x90, 0x15, 0xfd, 0x67, 0x22, 0xd4,
      0x99, 0x2e, 0x52, 0x90, 0x97, 0x45, 0xb1, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rosmsg/msg/detail/motor_input_msg__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rosmsg__msg__MotorInputMsg__EXPECTED_HASH = {1, {
    0x0c, 0x3e, 0x3a, 0x63, 0x7b, 0xc2, 0xa7, 0x2d,
    0x14, 0x23, 0xfb, 0xba, 0x1e, 0x6b, 0x2d, 0xb8,
    0x32, 0x75, 0xd7, 0x27, 0x95, 0x8c, 0xa3, 0x66,
    0x00, 0x12, 0x55, 0xca, 0xab, 0x71, 0xd4, 0xd1,
  }};
#endif

static char rosmsg__msg__RosCanMotorTgt__TYPE_NAME[] = "rosmsg/msg/RosCanMotorTgt";
static char rosmsg__msg__MotorInputMsg__TYPE_NAME[] = "rosmsg/msg/MotorInputMsg";

// Define type names, field names, and default values
static char rosmsg__msg__RosCanMotorTgt__FIELD_NAME__motor[] = "motor";

static rosidl_runtime_c__type_description__Field rosmsg__msg__RosCanMotorTgt__FIELDS[] = {
  {
    {rosmsg__msg__RosCanMotorTgt__FIELD_NAME__motor, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      2,
      0,
      {rosmsg__msg__MotorInputMsg__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosmsg__msg__RosCanMotorTgt__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rosmsg__msg__MotorInputMsg__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosmsg__msg__RosCanMotorTgt__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosmsg__msg__RosCanMotorTgt__TYPE_NAME, 25, 25},
      {rosmsg__msg__RosCanMotorTgt__FIELDS, 1, 1},
    },
    {rosmsg__msg__RosCanMotorTgt__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rosmsg__msg__MotorInputMsg__EXPECTED_HASH, rosmsg__msg__MotorInputMsg__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rosmsg__msg__MotorInputMsg__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "MotorInputMsg[2] motor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosmsg__msg__RosCanMotorTgt__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosmsg__msg__RosCanMotorTgt__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmsg__msg__RosCanMotorTgt__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosmsg__msg__RosCanMotorTgt__get_individual_type_description_source(NULL),
    sources[1] = *rosmsg__msg__MotorInputMsg__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
