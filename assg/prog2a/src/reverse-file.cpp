#include <fstream>
#include <iostream>
#include <cstdlib>

void usage(char *name) {
  std::cout << "usage: " << name << " infile outfile" << std::endl;
}
 
int main(int argc, char **argv) {

  // Open the files and handle the errors.
  if (argc != 3) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  std::ifstream  infile(argv[1], std::ifstream::binary);
  std::ofstream outfile(argv[2], std::ofstream::binary);
  try {
    if ( !infile.is_open()) throw  "Input file could not be opened!";
    if (!outfile.is_open()) throw "Output file could not be opened!";
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }

  // Read byte-by-byte and write out.
  char c[1];
  int offset = -1;
  infile.seekg(offset, infile.end);
  do {
    infile.read(c, 1);
    outfile.write(c, 1);
    infile.seekg(--offset, infile.end);
  } while (infile.tellg() > -1);

}
