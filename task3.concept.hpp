/// @file
/// @brief Task3: Formal interface requirements

#pragma once

#include <concepts> // std::same_as

namespace task3 {

/// @brief Formal interface requirements (concept) for your 'Point' class
template <typename T>
concept PointConcept = requires(T value, const T& const_ref, const T& const_other) {
  { T(10, 20) }; ///< T can be constructed from two numerical values

  { const_ref.get_x() } -> std::same_as<double>; ///< T has const public member function `get_x` that returns `double`
  { const_ref.get_y() } -> std::same_as<double>; ///< T has const public member function `get_y` that returns `double`

  { value.set_x(10) }; ///< T has public member function `set_x` that accepts number
  { value.set_y(10) }; ///< T has public member function `set_y` that accepts number

  { const_ref == const_other } -> std::same_as<bool>; ///< T has const operator==() overload for another T that returns boolean.
};

} // namespace task3
