/// @file
/// @brief Task3: tests

#include "task3.hpp"         // task3::Point
#include "task3.concept.hpp" // task3::PointConcept
#include <iostream>          // std::cout, sts::endl

int main() {

  using namespace task3;

  // static_assert(PointConcept<Point>); // todo: uncomment

  std::cout << "task3.test.cpp: all asserts passed" << std::endl;

  return 0;
}
