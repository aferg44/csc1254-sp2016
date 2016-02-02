#include <iostream>
#include <iomanip>
#include <cmath>

double factorial(int n) {
  double p = 1;
  for (int i=2; i<=n; i++)
    p *= i;
  return p;
}

double sine(double x) {
  x *= M_PI/180.0;
  int   n   = 0;
  float sum = 0, term = 1;
  while (std::abs(term)>.00001) {
    term  = std::pow(-1, n)*std::pow(x, 2*n+1)/factorial(2*n+1);
    sum  += term;
    n++;
  }
  return sum;
}

double cosine(double x) {
  return std::sqrt(1-std::pow(sine(x), 2));
}

int main() {
  int angles[5] = {0, 30, 60, 90, 180};
  for (int i=0; i<5; i++) {
    std::cout << "The   sine of "      << std::setw(3)      << angles[i] << " is ";
    std::cout <<  std::setprecision(5) <<   sine(angles[i]) << std::endl;
    std::cout << "The cosine of "      << std::setw(3)      << angles[i] << " is ";
    std::cout <<  std::setprecision(5) << cosine(angles[i]) << std::endl;
  }
}
