#include <iostream>
#include <fstream>
#include <sstream>

int num_spaces(std::string s) {
  int spaces = 0;
  for (int i=0; i<s.size(); i++)
    if (s[i] == ' ') spaces++;
  return spaces;
}

int main() {
  std::string s;
  std::ifstream infile("test-file.txt");
  int spaces=0, chars=0, lines=0;
  while (getline(infile, s))  {
    lines  += 1;
    chars  += s.size();
    spaces += num_spaces(s);
  }
  std::cout << lines  << " "
            << spaces << " "
            << chars  << std::endl;
}
