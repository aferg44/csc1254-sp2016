#include <iostream>
#include "Person.h"
#include "Circle.h"

int main() {

  int personality[10] = {5, 1, 1, 4, 1, 3, 4, 5, 2, 5};
  Person dc("Castleberry", personality);
  dc.describe();

  Circle circ;
  circ.x = 2;
  circ.y = 3;
  circ.r = 5;
  circ.describe();

}
