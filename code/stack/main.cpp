#include "Stack.h"
#include <iostream>

int main() {

  Stack s;
  s.push(2);
  s.push(3);
  s.push(5);

  while (!s.empty())
    std::cout << s.pop() << std::endl;

}
