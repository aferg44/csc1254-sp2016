#include <iostream>
#include <cstdlib>
#include "args.h"


void usage(char *name) {
  std::cout << "usage: " << name << " a n" << std::endl;
}

/**
 * Since m=log2(n), this runs in O(m)=O(log(n)) time.
 */
int exp(int m) {
  int result = 1;
  for (int i=0; i<m; i++)
    result *= 2;
  return result;
}

/**
 * Runs in O(log(n)) time.
 */
int log2(int n) {
  int result = 0;
  while (n>1) {
    result++;
    n /= 2;
  }
  return result;
}

int exp(int a, int n) {
  int times     = log2(n);               // log(n)
  int remainder = n-exp(times);          // log(n)
  int result    = a;
  for (int i=0; i<times;     i++)        // log(n)
    result *= result;
  for (int i=0; i<remainder; i++)        // n/2 at most
    result *= a;
  return result;
}

int main(int argc, char **argv) {
  try {
    if (argc != 3)            throw "Must enter two arguments!";
    if (!is_integer(argv[1])) throw "First argument must be integer!";
    if (!is_integer(argv[2])) throw "Second argument must be integer!";
  } catch (const char *e) {
    usage(argv[0]);
    std::cerr << e << std::endl;
    exit(EXIT_FAILURE);
  }
  std::cout << exp(atoi(argv[1]), atoi(argv[2])) << std::endl;
}
