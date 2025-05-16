/// @file
/// @brief Task2: Function Declaration & Definitions

#pragma once

#include <cstddef> // std::size_t
#include <numeric> // std::accumulate
#include <set>     // std::set
#include <vector>  // std::vector

namespace task2 {

/// @brief Sums the values
/// @param vec sequence of values
/// @return Sum of all values in the sequence
/// @todo Adjust the function to accept a vector of arbitrary types:
///       - You can assume that the arbitrary type supports the += operator
///       - You need to uncomment respective lines in task2.test.cpp to test your implementation.

template <typename T> inline T sum(const std::vector<T>& vec) { return std::accumulate(vec.begin(), vec.end(), T{}); }

/// @brief Finds the minimum value
/// @param vec Sequence of values (assume size() >= 1)
/// @return Minimum value in the sequence
/// @todo Adjust the function to accept a vector of arbitrary types:
///       - You can assume that the arbitrary type supports the '<' operator
///       - You need to uncomment respective lines in task2.test.cpp to test your implementation.

template <typename T> inline T min(const std::vector<T>& vec) {
  T min = vec.front();

  for (const T& x : vec) {
    if (x < min) {
      min = x;
    }
  }

  return min;
}

/// @brief Finds the number of unique values
/// @param vec Sequence of values
/// @return Number of unique values in the sequence
/// @todo Adjust the function to accept a vector of arbitrary types:
///       - You can assume that the arbitrary type can be inserted into a std::set (i.e. is less-compareable)
///       - You need to uncomment respective lines in task2.test.cpp to test your implementation.
template <typename T> inline std::size_t count_unique(const std::vector<T>& vec) {
  std::set<T> unique;

  for (const T& x : vec) {
    unique.insert(x);
  }

  return unique.size();
}

/// @brief Generates a range of equidistant values in an interval
/// @param start Start of the interval
/// @param end End of the interval
/// @param N number of values to generate
/// @return Sequence of equidistant values
/// @todo Adjust the function to accept any type (noy only 'float'):
///       - You can assume that the arbitrary type support arithmetic operations
///       - You need to uncomment respective lines in task2.test.cpp to test your implementation.

template <typename T> inline std::vector<T> range(T start, T end, unsigned int N) {
  std::vector<T> rtn;
  const T step = (end - start) / (N - 1);

  for (T n = 0u; n < N; ++n) {
    rtn.emplace_back(start + step * n);
  }

  return rtn;
}

} // namespace task2
