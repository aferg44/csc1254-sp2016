#include <iostream>





void print_rev(std::string s, int i) {
  if (i<0) return;
  else {
    std::cout << i << "] " << s[i] << std::endl;
    print_rev(s, i-1);
  }
}
 
int main() {
  std::string s = "kitty";
  print_rev(s, s.size()-1);
}
