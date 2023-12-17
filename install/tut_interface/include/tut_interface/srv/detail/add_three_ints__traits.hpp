// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tut_interface:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
#define TUT_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_

#include "tut_interface/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tut_interface::srv::AddThreeInts_Request>()
{
  return "tut_interface::srv::AddThreeInts_Request";
}

template<>
inline const char * name<tut_interface::srv::AddThreeInts_Request>()
{
  return "tut_interface/srv/AddThreeInts_Request";
}

template<>
struct has_fixed_size<tut_interface::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tut_interface::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tut_interface::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tut_interface::srv::AddThreeInts_Response>()
{
  return "tut_interface::srv::AddThreeInts_Response";
}

template<>
inline const char * name<tut_interface::srv::AddThreeInts_Response>()
{
  return "tut_interface/srv/AddThreeInts_Response";
}

template<>
struct has_fixed_size<tut_interface::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tut_interface::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tut_interface::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tut_interface::srv::AddThreeInts>()
{
  return "tut_interface::srv::AddThreeInts";
}

template<>
inline const char * name<tut_interface::srv::AddThreeInts>()
{
  return "tut_interface/srv/AddThreeInts";
}

template<>
struct has_fixed_size<tut_interface::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<tut_interface::srv::AddThreeInts_Request>::value &&
    has_fixed_size<tut_interface::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<tut_interface::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<tut_interface::srv::AddThreeInts_Request>::value &&
    has_bounded_size<tut_interface::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<tut_interface::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<tut_interface::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tut_interface::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUT_INTERFACE__SRV__DETAIL__ADD_THREE_INTS__TRAITS_HPP_
