#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <cstdlib>

/**
 * TODO: Find number of words in s.
 */
int words_of(std::string s) {
}

/**
 *  Convert string to character array of words. 
 *  @param   s  string to convert
 *  @return     jagged array of words
 */
char **word_array(std::string s) {
}

int main() {
  std::string files = "architecture.txt boolean.txt computers.txt kitties.txt";
  char **filenames = word_array(files);
  int n = words_of(files);
  for (int i=0; i<n; i++) {
    std::ofstream outfile(filenames[i]);
    outfile << "This is file " << i << std::endl;
    free(filenames[i]);
  }
  free(filenames);
  return 0;
}
