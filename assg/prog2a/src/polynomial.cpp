#include <iostream> 
#include <cmath> 

/**
 * This is an O(n^2) algorithm given that the implementation of pow is linear
 * in n.  To make it more efficient, apply Horner's algorithm for the
 * evaluation of a polynomial.
 */
int polynomial(int p[], int n, int x) {
  int result = 0;
  for (int i=0; i<n; i++)
    result += p[i] * pow(x, i);
  return result;
}

int main() {
  int a[4] = {2, -2, 3, 4};
  std::cout << polynomial(a, 4, 2) << std::endl;
}
