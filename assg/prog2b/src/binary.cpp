#include <iostream>
#include <iomanip>

std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)
    std::swap(s[i], s[s.size()-i-1]);
  return s;
}

std::string binary(char c) {
  int ascii = (int) c;
  std::string s = "";
  while (ascii > 0) {
    s += (ascii%2) ? "1" : "0";
    ascii /= 2;
  }
  return reverse(s);
}

int main() {
  std::cout << std::setfill('0') << std::setw(8) << binary('a') << std::endl;
  std::cout << std::setfill('0') << std::setw(8) << binary('A') << std::endl;
}
