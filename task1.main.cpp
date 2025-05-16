/// @file
/// @brief Task1: "single-file" executable C++ program

/// @todo Include standard library headers as needed
#include <iostream>
#include <string>
#include <vector>

namespace task1 {

/// @todo Implement a function template 'print' for a template type T according to the description below:
/// - a std::vector with elements of type T is received via a parameter (std::vector<T>)
/// - the function then prints all elements to the console **without separation** (i.e. {1,2,3} => 123) ending with a
///   new line
/// - the function has no return value
/// @note You can assume that the template type T is printable, i.e. this works:
///       T value{};
///       std::cout << value;

} // namespace task1

/// @todo Implement a 'main' function conducting the following tasks in this order:
/// - fill a std::vector<int> with with the following sequence of values
///   3, 6, 0, 0, 5, 0
/// - fill a std::vector<std::string> with with the following sequence of values
///   "e", "lec", "tro", "mag", "net", "ic"
/// - use your function to print both vectors to the console separately

template <typename T> class Print {
public:
  void print(std::vector<T> vec) {
    for (const auto& element : vec) {
      std::cout << element << ' ';
    }
    std::cout << std::endl;
  }
};
int main() {
  Print<int> intPrinter;
  Print<std::string> strPrinter;

  std::vector<int> intVec = {3, 6, 0, 0, 5, 0};
  std::vector<std::string> strVec = {"e", "lec", "tro", "mag", "net", "ic"};
  intPrinter.print(intVec);
  strPrinter.print(strVec);
}
