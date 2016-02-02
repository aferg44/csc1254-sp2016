#include <iostream>
#include <iomanip>
#include <cmath>

std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)
    std::swap(s[i], s[s.size()-i-1]);
  return s;
}

std::string binary(char c) {
  int ascii = (int) c;
  ascii = (ascii<0) ? 256+ascii : ascii;
  std::string s = "";
  while (ascii > 0) {
    s += (ascii%2) ? "1" : "0";
    ascii /= 2;
  }
  while (s.size() < 8)
    s += "0";
  return reverse(s);
}

char bit_reverse(char c) {
  int ascii = (int) c;
  ascii = (ascii<0) ? 256+ascii : ascii;
  int reverse = 0;
  int i = 1;
  while (ascii > 0) {
    reverse += (ascii%2) ? pow(2,8-i) : 0;
    ascii /= 2;
    i++;
  }
  return (char) reverse;
}

int main() {
  std::cout << "The letter 'a' in binary is " << binary('a')              << std::endl;
  std::cout << "Reversed is                 " << binary(bit_reverse('a')) << std::endl;
  std::cout << "The letter 'A' in binary is " << binary('A')              << std::endl;
  std::cout << "Reversed is                 " << binary(bit_reverse('A')) << std::endl;
}

