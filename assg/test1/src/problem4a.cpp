#include <iostream>

/**
 * The simplest solution is 0. Another is 1 1.
 */
int main(int argc, char **argv) {
  assert(argc-1==atoi(argv[0]));
  assert(atoi(argv[atoi(argv[argc-1])]) == atoi(argv[0]));
  std::cout << "Correct!" << std::endl;
}

/**
 * The line
 *
 *   assert(argc-1==atoi(argv[0]));
 *
 * requires that the last argument be the number of arguments minus 1.  A 
 * lone 0 satisfies this requirement. The line
 *
 *   assert(atoi(argv[atoi(argv[argc-1])]) == atoi(argv[0]));
 *
 * is quite tricky. It asserts that the last argument rendered as an integer,
 * that is
 *
 *   atoi(argv[argc-1])
 *
 * is an index which reference another (possibly distinct) argument, which 
 * must be equal to the program name.  But 0 also satisfies this requirement,
 * since if it is the last argument, it is also the first.
 */
