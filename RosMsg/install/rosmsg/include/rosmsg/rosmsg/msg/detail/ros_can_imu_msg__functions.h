// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_imu_msg.h"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__FUNCTIONS_H_
#define ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rosmsg/msg/rosidl_generator_c__visibility_control.h"

#include "rosmsg/msg/detail/ros_can_imu_msg__struct.h"

/// Initialize msg/RosCanImuMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosmsg__msg__RosCanImuMsg
 * )) before or use
 * rosmsg__msg__RosCanImuMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
bool
rosmsg__msg__RosCanImuMsg__init(rosmsg__msg__RosCanImuMsg * msg);

/// Finalize msg/RosCanImuMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
void
rosmsg__msg__RosCanImuMsg__fini(rosmsg__msg__RosCanImuMsg * msg);

/// Create msg/RosCanImuMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosmsg__msg__RosCanImuMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
rosmsg__msg__RosCanImuMsg *
rosmsg__msg__RosCanImuMsg__create(void);

/// Destroy msg/RosCanImuMsg message.
/**
 * It calls
 * rosmsg__msg__RosCanImuMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
void
rosmsg__msg__RosCanImuMsg__destroy(rosmsg__msg__RosCanImuMsg * msg);

/// Check for msg/RosCanImuMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
bool
rosmsg__msg__RosCanImuMsg__are_equal(const rosmsg__msg__RosCanImuMsg * lhs, const rosmsg__msg__RosCanImuMsg * rhs);

/// Copy a msg/RosCanImuMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
bool
rosmsg__msg__RosCanImuMsg__copy(
  const rosmsg__msg__RosCanImuMsg * input,
  rosmsg__msg__RosCanImuMsg * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_type_hash_t *
rosmsg__msg__RosCanImuMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_runtime_c__type_description__TypeDescription *
rosmsg__msg__RosCanImuMsg__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_runtime_c__type_description__TypeSource *
rosmsg__msg__RosCanImuMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosmsg__msg__RosCanImuMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/RosCanImuMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosmsg__msg__RosCanImuMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
bool
rosmsg__msg__RosCanImuMsg__Sequence__init(rosmsg__msg__RosCanImuMsg__Sequence * array, size_t size);

/// Finalize array of msg/RosCanImuMsg messages.
/**
 * It calls
 * rosmsg__msg__RosCanImuMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
void
rosmsg__msg__RosCanImuMsg__Sequence__fini(rosmsg__msg__RosCanImuMsg__Sequence * array);

/// Create array of msg/RosCanImuMsg messages.
/**
 * It allocates the memory for the array and calls
 * rosmsg__msg__RosCanImuMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
rosmsg__msg__RosCanImuMsg__Sequence *
rosmsg__msg__RosCanImuMsg__Sequence__create(size_t size);

/// Destroy array of msg/RosCanImuMsg messages.
/**
 * It calls
 * rosmsg__msg__RosCanImuMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
void
rosmsg__msg__RosCanImuMsg__Sequence__destroy(rosmsg__msg__RosCanImuMsg__Sequence * array);

/// Check for msg/RosCanImuMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
bool
rosmsg__msg__RosCanImuMsg__Sequence__are_equal(const rosmsg__msg__RosCanImuMsg__Sequence * lhs, const rosmsg__msg__RosCanImuMsg__Sequence * rhs);

/// Copy an array of msg/RosCanImuMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosmsg
bool
rosmsg__msg__RosCanImuMsg__Sequence__copy(
  const rosmsg__msg__RosCanImuMsg__Sequence * input,
  rosmsg__msg__RosCanImuMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__FUNCTIONS_H_
