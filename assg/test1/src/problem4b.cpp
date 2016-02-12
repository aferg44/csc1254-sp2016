#include <iostream>

/**
 * The intended solution was 0 1 2 4, but 0 4 was also possible.
 */
int main(int argc, char **argv) {
  assert(4==atoi(argv[argc-1]));
  for (; argc>2; argc--)
    assert(atoi(argv[argc-1])/atoi(argv[argc-1])==2);
  assert(atoi(argv[0])==0);
  std::cout << "Correct" << std::endl;
}

/**
 * The line 
 *
 *   assert(4==atoi(argv[argc-1]));
 * 
 * means that 4 has to be the last argument. The loop
 *
 *   for (; argc>2; argc--)
 *     assert(atoi(argv[argc-1])/atoi(argv[argc-1])==2);
 *
 * requires that the ratio of every adjacent pair of arguments be 2. That
 * is 4 divided by its previous argument must be 2. Given that, the previous
 * argument must be 2. Also 2 divided by its previous argument must be 2. Given
 * that, the previous argument must be 2. This applies to all arguments except
 * the last two.  Then the line
 *
 *   assert(atoi(argv[0])==0);
 *
 * requires that the first argument be 0. A clever solution would be to call
 * the program with 0 4 to bypass the loop entirely.
 */
