// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tut_interface:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACE__MSG__DETAIL__SPHERE__STRUCT_H_
#define TUT_INTERFACE__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Sphere in the package tut_interface.
typedef struct tut_interface__msg__Sphere
{
  geometry_msgs__msg__Point center;
  double radius;
} tut_interface__msg__Sphere;

// Struct for a sequence of tut_interface__msg__Sphere.
typedef struct tut_interface__msg__Sphere__Sequence
{
  tut_interface__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tut_interface__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUT_INTERFACE__MSG__DETAIL__SPHERE__STRUCT_H_
