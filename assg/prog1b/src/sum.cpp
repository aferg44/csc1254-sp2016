#include <iostream>

int sum(int n) {
  int s = 1;
  for (int i=2; i<=n; i++)
    s += i;
  return s;
}

int main() {
  std::cout << sum(10) << std::endl;
}
