#include "Circle.h"
#include <cmath>
#include <iostream>

float Circle::area() {
  return M_PI*r*r;
}

float Circle::circumference() {
  return 2*M_PI*r;
}

void Circle::describe() {
  std::cout << "Circle at ("   << x << ", " << y << ")";
  std::cout << " with radius " << r << std::endl;
}
