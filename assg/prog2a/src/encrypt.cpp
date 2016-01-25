#include <cstdlib> 
#include <unistd.h>    // <~~~ include for getpass
#include <iostream>
#include <fstream>


int length(char *password) {
  int i = 0;
  while (password[i] != '\0')
    i++;
  return i;
}


bool verify(char *password) {
  return (length(password)>=8);
}


bool encrypting(std::fstream &file, char *password) {
  char c[1];
  for (int i=0; i<length(password); i++) {
    file.read(c, 1);
    if (*c - password[i] != password[i])
      return true;
  }
  return false;
}


void prepend(std::fstream &file, char *password) {
  int n=length(password);
  for (int i=0; i<n; i++)
    file.put(password[i]);
}


void encrypt(std::fstream &file, char *password) {
  prepend(file, password);
  char c[1];
  int i=0, n=length(password);
  while (!file.eof()) {
    file.read(c, 1);
    *c = *c + password[i];
    i = (i+1)%n;
    file.write(c, 1);
  }
}


void decrypt(std::fstream &file, char *password) {
  char c[1];
  int i=0, n=length(password);
  while (!file.eof()) {
    file.read(c, 1);
    *c = *c - password[i];
    i = (i+1)%n;
    file.write(c, 1);
  }
}


int main(int argc, char **argv) {

  // Check arguments.
  if (argc != 2) 
    exit(EXIT_FAILURE);

  // Get password.
  char *password = getpass("Enter password: ");
  if (!verify(password))
    std::cerr << "Bad password!" << std::endl;

  // Open the file and perform the operation.
  std::fstream file(argv[1]);
  if (encrypting(file, password))
         encrypt(file, password); 
  else   decrypt(file, password);

}
