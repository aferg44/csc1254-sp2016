#include "Coords.h"
#include <stdlib.h>
#include <time.h>


Coords::Coords() {
  x = y = 0;
  srand(time(NULL));
}


Coords::Coords(int x, int y) {
  Coords();
  this->x = x;
  this->y = y;
}


int Coords::getX() {
  return x;
}


int Coords::getY() {
  return y;
}


void Coords::setX(int x) {
  this->x = x;
}


void Coords::setY(int y) {
  this->y = y;
}


void Coords::set(int x, int y) {
  this->x = x;
  this->y = y;
}


void Coords::random(Coords bounds) {
  x = rand()%bounds.getX();
  y = rand()%bounds.getY();
}
