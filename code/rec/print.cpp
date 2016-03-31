#include <iostream>





void print(std::string s, int i) {
  if (i==s.size()) return;
  else {
    std::cout << i << "] " << s[i] << std::endl;
    print(s, i+1);
  }
}
 
int main() {
  std::string s = "kitty";
  print(s, 0);
}
