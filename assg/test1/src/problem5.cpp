#include <iostream>
#include <fstream>
#include "assert.h"

void copy(char *infilename, char *outfilename) {
  std::ifstream  infile(infilename);
  std::ofstream outfile(outfilename);
  if (!infile.is_open())
    throw "File could not be opened!";
  std::string s;
  while (getline(infile, s))
    outfile << s << std::endl;
  infile.close();
  outfile.close();
}

int main(int argc, char **argv) {
  assert(argc==3);
  try {
    copy(argv[1], argv[2]);
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }
}
