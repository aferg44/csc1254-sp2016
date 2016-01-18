#include <iostream>
#include <string>
#include <cstdlib>
#include "color.h"

using namespace std;
using namespace color;

int main() {
  string alphabet[4][3] = {{   " __",
                               "|  ",
                               "|__"},

                             { " _ ",
                               "|_|",
                               "| |"},
      
                             { "___",
                               " | ",
                               " | "}, 
                               
                             { " __",
                               "|_ ",
                               "__|"}, 

                               };
      
   /**
    * Note that this prints only a few characters vertically. The program 
    * should print any input string horizontally.
    */
   for (int i=0; i<4; i++)
     for (int j=0; j<3; j++)
        std::cout << alphabet[i][j] << std::endl;

}
