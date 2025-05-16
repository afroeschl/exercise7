/// @file
/// @brief Task3: Implementation of 'Point'

#pragma once

namespace task3 {

/// @todo Implement a struct or class 'Point' that fulfills the concept task3::PointConcept (details see
/// 'task3.concept.hpp')
class Point {
private:
  double x_;
  double y_;

public:
  Point(double x, double y) : x_(x), y_(y) {}

  get_x() const { return x_; } ///< Returns the x-coordinate

  get_y() const { return y_; } ///< Returns the y-coordinate

  set_x(double x) { x_ = x; } ///< Sets the x-coordinate

  set_y(double y) { y_ = y; } ///< Sets the y-coordinate

  bool operator==(const Point& other) const { return (x_ == other.x_) && (y_ == other.y_); }
};

} // namespace task3
