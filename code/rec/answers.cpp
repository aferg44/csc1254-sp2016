#include <iostream>




int fib(int n) {
  if (n<3) return 1;
  else     return fib(n-1) + fib(n-2);
}

int digsum(int n) {
  if (n<10) return n;
  else      return digsum(n%10 + digsum(n/10));
}

int main() {
  std::cout << fib(5)         << std::endl;
  std::cout << digsum(123456) << std::endl;
}
