#include "Dir.h"
#include <cmath>
#include <stdlib.h>
#include <time.h>


Dir::Dir() {
  dx = dy = 0;
  srand(time(NULL));
}


Dir::Dir(int dx, int dy) {
  Dir();
  setDX(dx);
  setDY(dy);
}

int Dir::getDX() {
  return dx;
}


int Dir::getDY() {
  return dy;
}


void Dir::setDX(int dx) {
  if (std::abs(dx)<=1)
    this->dx = dx;
}


void Dir::setDY(int dy) {
  if (std::abs(dy)<=1)
    this->dy = dy;
}


void Dir::revDX() {
  dx *= -1;
}


void Dir::revDY() {
  dy *= -1;
}


void Dir::init() {
  dx = 1+(rand()%2)*-2;
  dy = 1+(rand()%2)*-2;
}


/**
 *  3                   0
 *    (-1, 1)   (1, 1)
 *            x
 *    (-1,-1)   (1,-1)
 *  2                   1
 */
int Dir::index() {
  return (dy+dx<=0) + (dx<0) + (dy>dx);
}
