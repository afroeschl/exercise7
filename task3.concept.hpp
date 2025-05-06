/// @file
/// @brief Task3: Formal interface requirements

#pragma once

#include <concepts> // std::same_as

namespace task3 {

/// @brief Formal interface requirements (concept) for your 'Point' class
template <typename T>
concept PointConcept = requires(T value, const T& const_ref, const T& const_other) {
  { T(10.0, 20.0) }; ///< T can be constructed from two double values

  { const_ref.get_x() } -> std::same_as<double>; ///< T has const public member function `get_x` that returns a double
  { const_ref.get_y() } -> std::same_as<double>; ///< T has const public member function `get_y` that returns a double

  { value.set_x(10.0) }; ///< T has public member function `set_x` that accepts a double
  { value.set_y(10.0) }; ///< T has public member function `set_y` that accepts a double

  { const_ref == const_other } -> std::same_as<bool>; ///< T has const operator==() overload for another T that returns boolean.
};

} // namespace task3
