#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cctype>

/**
 *  TODO: Tell if string is an integer. 
 */
bool is_integer(std::string s) {
}

/**
 *  TODO: Find count of words in string. 
 */
int words_of(std::string s) {
}

/**
 *  TODO: Convert string to integer array.
 */
int *array(std::string s) {
}


int main() {
  std::string s;
  std::cout << "> ";
  getline(std::cin, s);
  try {
    int *a = array(s);
    for (int i=1; i<=a[0]; i++)
      std::cout << i << ":\t" << a[i] << std::endl;
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }
}
