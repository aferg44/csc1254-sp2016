#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <cstdlib>

/**
 * Find number of words in s.
 * @param s string to find words of
 * @return  words in string
 */
int words_of(std::string s) {
  std::stringstream ss(s);
  std::string buffer;
  int count = 0;
  while (ss >> buffer)
    count++;
  return count;
}

/**
 *  Convert string to character array of words. 
 *  @param   s  string to convert
 *  @return     jagged array of words
 */
char **word_array(std::string s) {
  int i=0, count = words_of(s);
  char **words = (char **) malloc(count*sizeof(char *));
  std::stringstream ss(s);
  std::string buffer;
  std::cout << count << std::endl;
  while (ss >> buffer) {
    words[i] = (char *) malloc((buffer.size()+1)*sizeof(char));
    strcpy(words[i++], buffer.c_str());
  }
  return words;
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
