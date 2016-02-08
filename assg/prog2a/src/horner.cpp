#include <iostream> 
#include <cstdlib> 
#include "args.h"


void usage(char *name) {
  std::cout << "usage: " << name << " x coefficients..." << std::endl;
}


void print(int p[], int n, int x) {
  if (n<1) return;
  for (int i=n-1; i>=1; i--)
    std::cout << p[i] << "*" << x << "^" << i << " + ";
  std::cout << p[0];
}


int horner(int p[], int n, int x) {
  if (n<1) return 0;
  int result = p[n-1];
  for (int i=n-2; i>=0; i--)
    result = x*result + p[i];
  return result;
}


int main(int argc, char **argv) {

  if (argc < 3) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  int x, a[argc-2];

  try {
    if (!is_integer(argv[1]))
      throw "Value must be integer!";
    else x = atoi(argv[1]);
    for (int i=2; i<argc; i++)
      if (!is_integer(argv[i]))
        throw "Arguments must be integers!";
      else a[i-2] = atoi(argv[i]);
  } catch (const char *e) {
    usage(argv[0]);
    std::cerr << e << std::endl;
  }

  print(a, argc-2, x);
  std::cout << " = ";
  std::cout << horner(a, argc-2, x) << std::endl;

}

