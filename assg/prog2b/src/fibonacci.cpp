#include <iostream>

int fib(int n) {
  int f1=1, f2=1, f3=1;
  n -= 2;
  while (n-- > 0) {
    f3 = f1+f2;
    f1 = f2;
    f2 = f3;
  }
  return f3;
}

int main() {
  for (int i=1; i<=10; i++) 
    std::cout << fib(i) << " ";
  std::cout << std::endl;
}
