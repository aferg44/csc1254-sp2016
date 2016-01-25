#include <iostream>
#include <assert.h>

int main(int argc, char **argv) {
  assert(argc == 2);
  std::cout << argv[1] << std::endl;
}
