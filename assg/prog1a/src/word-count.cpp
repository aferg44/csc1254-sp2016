#include <iostream>
#include <fstream>
#include <sstream>

int num_words(std::string s) {
  int n = 0;
  std::stringstream ss(s);
  std::string word;
  while (ss >> word)
    n++;
  return n;
}

int main() {
  std::string s;
  std::ifstream infile("test-file.txt");
  int words=0, chars=0, lines=0;
  while (getline(infile, s))  {
    lines  += 1;
    chars  += s.size();
    words  += num_words(s);
  }
  std::cout << lines  << " "
            << words  << " "
            << chars  << std::endl;
}
