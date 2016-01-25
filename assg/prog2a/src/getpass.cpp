#include <cstdlib>  
#include <unistd.h>     // <~~~ include for getpass
#include <iostream>
#include <string.h>

/**
 * NOTE: It is generally not a good idea to store passwords in the form of
 * strings in programs!  This program is for demonstration of the getpass
 * function.
 */
const char *mypass = "secret";

int main() {
  char *password = getpass("Enter password: ");
  if (strcmp(password,mypass)==0) std::cout << "Correct password!\n";
  else                            std::cout << "Incorrect password!\n";
  return 0;
}
