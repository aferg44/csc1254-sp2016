





#include <iostream>

int factorial_iterative(int n) {
  int total = 1;
  for (int i=1; i<=n; i++) 
    total *= i;
  return total;
}

int factorial_rec(int n) {
  if (n==1) return 1;
  else      return n*factorial_rec(n-1);
}

int main() {
  std::cout << "The factorial of numbers from 1 to 5 is: " << factorial_rec(5) << std::endl;
  std::cout << "The factorial of numbers from 1 to 5 is: " << factorial_iterative(5) << std::endl;
}
