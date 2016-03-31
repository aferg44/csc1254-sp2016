#include <iostream>





void print(std::string s, int i) {
  if (i<0) return;
  else {
    print(s, i-1);
    std::cout << i << "] " << s[i] << std::endl;
  }
}

int main() {
  std::string s = "kitty";
  print(s, s.size()-1);
}
