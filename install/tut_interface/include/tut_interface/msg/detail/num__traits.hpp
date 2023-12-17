// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tut_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_
#define TUT_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_

#include "tut_interface/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tut_interface::msg::Num>()
{
  return "tut_interface::msg::Num";
}

template<>
inline const char * name<tut_interface::msg::Num>()
{
  return "tut_interface/msg/Num";
}

template<>
struct has_fixed_size<tut_interface::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tut_interface::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tut_interface::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUT_INTERFACE__MSG__DETAIL__NUM__TRAITS_HPP_
