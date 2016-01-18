#include <iostream>

/**
 * Return sum of numbers from 1 to given n.
 * @param n  number to sum up to
 * @return   sum of numbers 1 to n
 */
int sum(int n) {
  int s = 1;
  for (int i=2; i<=n; i++)
    s += i;
  return s;
}

int main() {
  std::cout << sum(10) << std::endl;
}
