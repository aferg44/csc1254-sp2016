#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cctype>

/**
 *  Tell if string is an integer. 
 *  @param   s  string to tell if integer
 *  @return     true if integer, false otherwise
 */
bool is_integer(std::string s) {
  if (s.size() < 1) return false;
  int i=0, n=s.size();
  if (s[i] == '-') i++;
  while (i<n) {
    if (!isdigit(s[i]))
      return false;
    i++;
  }
  return true;
}

/**
 *  Find count of words in string. 
 *  @param   s string to find count of words in
 *  @return    count of words in string
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
 *  Convert string to integer array  
 *  @param   s string to convert to int array
 *  @return    integer array
 */
int *array(std::string s) {
  int i=0, count=words_of(s);  
  int *a = (int *) malloc((count+1)*sizeof(int));
  a[i++] = count;
  std::stringstream ss(s);
  std::string buffer;
  while (ss >> buffer) 
    if (is_integer(buffer)) a[i++] = stoi(buffer);
    else throw "String contains non-integer!";
  return a;
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
