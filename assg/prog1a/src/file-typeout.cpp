#include <iostream>
#include <fstream>
#include <unistd.h>

void typeout(std::string s) {
  for (int i=0; i<s.size(); i++) {
    std::cout << s[i] << std::flush;
    usleep(33333);
  }
  std::cout << std::endl;
}

int main() {
  std::ifstream infile("test-file.txt"); 
  std::string s;
  while (std::getline(infile, s)) 
    typeout(s); 
}
