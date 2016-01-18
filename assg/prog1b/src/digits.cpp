#include <iostream>

/**
 * Find digits in number, assuming positive n.
 * @param  n number whose digits to find
 * @return   number of digits
 */
int digits(int n) {
  if (n == 0) return 1;
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
