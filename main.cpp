#include <iostream>

#include "src/point.hpp"

int main()
{
  Point p1 = Point(3.2, 9.8);
  Point p2 = Point(5.5, -1.2);

  std::cout << p1 - p2 << std::endl;    // Prints out 11.238
  std::cout << (p1 == p2) << std::endl; // Prints out 0 (false)
  std::cout << (p1 != p2) << std::endl; // Prints out 1 (true)
  std::cout << (p1 / p2) << std::endl;  // Prints out a nicely formatted point such as (4.35, 4.3)
}
