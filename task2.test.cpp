/// @file
/// @brief Task2: tests

#include "task2.hpp" // task2::sum, task2::min, ...

#include <cassert> // assert
#include <cmath>   // std::abs
#include <string>  // std::string
#include <iostream>   // std::cout, sts::endl

///@brief task2::sum signature check: returns a T when passing a std::vector<T>
template <typename T>
concept sum_valid = requires(std::vector<T> vec) {
  { task2::sum(vec) } -> std::same_as<T>;
};

///@brief task2::min signature check: returns a T when passing a std::vector<T>
template <typename T>
concept min_valid = requires(std::vector<T> vec) {
  { task2::min(vec) } -> std::same_as<T>;
};

///@brief task2::count_unique signature check: returns an integer (std::size_t) when passing a std::vector<T>
template <typename T>
concept count_unique_valid = requires(std::vector<T> vec) {
  { task2::count_unique(vec) } -> std::same_as<std::size_t>;
};

///@brief task2::range signature check: returns a std::vector<T> when passing a type T as start and end
template <typename T>
concept range_valid = requires(T value) {
  { task2::range(value, value, 0u) } -> std::same_as<std::vector<T>>;
};

int main() {

  { // testing task2::sum

    // testing formal interface
    static_assert(sum_valid<int>);
    // static_assert(sum_valid<float>);  // todo: uncomment
    // static_assert(sum_valid<double>); // todo: uncomment

    // testing functionality
    assert((task2::sum(std::vector<int>{1, 2, 3}) == 6));
    // assert(std::abs(task2::sum(std::vector<double>{0.1, 0.2, 0.3}) - 0.6) < 1e-9);     // todo: uncomment
    // assert(std::abs(task2::sum(std::vector<float>{0.1f, 0.2f, 0.3f}) - 0.6f) < 1e-6f); // todo: uncomment
  }

  { // testing task2::min

    // testing formal interface
    static_assert(min_valid<int>);
    // static_assert(min_valid<float>);  // todo: uncomment
    // static_assert(min_valid<double>); // todo: uncomment

    // testing functionality
    assert((task2::min(std::vector<int>{1, 2, 3}) == 1));
    // assert(std::abs(task2::min(std::vector<double>{0.1, 0.2, 0.3}) - 0.1) < 1e-9);     // todo: uncomment
    // assert(std::abs(task2::min(std::vector<float>{0.1f, 0.2f, 0.3f}) - 0.1f) < 1e-6f); // todo: uncomment
  }

  { // testing task2::count_unique

    // testing formal interface
    static_assert(count_unique_valid<int>);
    // static_assert(count_unique_valid<std::string>); // todo: uncomment

    // testing functionality
    assert(task2::count_unique(std::vector<int>{1, 2, 3}) == 3);
    // assert(task2::count_unique(std::vector<std::string>{{"one", "one", "two"}}) == 2); // todo: uncomment
  }

  { // testing task2::range

    // testing formal interface
    static_assert(range_valid<float>);
    // static_assert(range_valid<double>); // todo: uncomment

    // testing functionality
    assert(std::abs(task2::range(0.0f, 10.0f, 3).at(1) - 5.0f) < 1e-6);
    // assert(std::abs(task2::range<double>(0.0, 10.0, 3).at(1) - 5.0) < 1e-9); // todo: uncomment
  }

  std::cout << "task2.test.cpp: all asserts passed" << std::endl;

  return 0;
}
