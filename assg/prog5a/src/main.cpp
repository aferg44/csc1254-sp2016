#include <unistd.h>
#include <iostream>
#include "Board.h"

void clear() {
    std::cout << std::string(80, '\n');
    std::cout << std::flush;
}

int main() {

  Board b;

  Coords c1( 8, 3),  c2(52, 22);
  Coords c3(52, 3),  c4( 8, 22);
  Coords c5(23, 10), c6(23, 15);
  Coords c7(37, 10), c8(37, 15);
  b.bind(c1, c2);
  b.bind(c3, c4);
  b.bind(c6, c5);
  b.bind(c8, c7);

  while (true) {
    b.print();
    b.advance();
    usleep(100000);
    clear();
  }

}
