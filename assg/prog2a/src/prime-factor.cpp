#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "args.h"

void usage(char *name) {
  std::cout << "usage: " << name << " n" << std::endl;
}

void factor(int n) {
  for (int i=2; i<=n; i++)
    while (n%i == 0) {
      std::cout << std::setw(3) << i;
       n /= i;
    }
  std::cout << std::endl;
}

int main(int argc, char **argv) {
  try {
    if (argc != 2)            throw "Must enter integer!";
    if (!is_integer(argv[1])) throw "Argument must be integer!";
  } catch (const char *e) {
    usage(argv[0]);
    std::cerr << "Must enter integer!" << std::endl;
    exit(EXIT_FAILURE);
  }
  factor(atoi(argv[1]));
}
