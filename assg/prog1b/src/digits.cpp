#include <iostream>

int digits(int n) {
  int d = 0;
  while (n > 0) {
    n /= 10;
    d++;
  }
  return d;
}

int main() {
  std::cout << digits(2357) << std::endl;
}
