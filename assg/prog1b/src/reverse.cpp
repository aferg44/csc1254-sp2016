#include <iostream>
#include <string>

/**
 * Return reverse of a string.
 * @param  s string to be reversed
 * @return   reverse of string s
 */
std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)
    std::swap(s[i], s[s.size()-i-1]);
  return s;
}

int main() {
  std::cout << reverse("marjoram") << std::endl;
}
