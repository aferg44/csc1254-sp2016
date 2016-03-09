#include "Board.h"
#include <iostream>
#include "color.h"

#include "Coords.h"
#include "Tile.h"

  
Board::Board(Coords dim) {
  this->dim = dim;
  initialize();
}


Board::Board() {
  dim.setX(60);
  dim.setY(25);
  initialize();
}


void Board::initialize() {
  dir.init();
  allocate();
  boundaries();
  associate();
  Coords init;
  init.random(dim);
  pos = &map[init.getX()][init.getY()];
}


void Board::setColor(const char *c) {
       if (c ==    "red") std::cout << color::red;
  else if (c ==   "blue") std::cout << color::blue;
  else if (c == "yellow") std::cout << color::yellow;
  else if (c ==  "white") std::cout << color::reset;
}


char Board::charAt(int i, int j) {
  if (i==dim.getX()) {
    return '\n';
  } else if (pos == &map[i][j]) {
    setColor("red");
    return '*';
  } else if (map[i][j].getWall()) {
    setColor("white");
    if (map[i][j].getWall()==1)
         return '-';
    else return '|';
  } else if (map[i][j].getWarp()>0) {
    if (map[i][j].getWarp()==1)
         setColor("blue");
    else setColor("yellow");
    return 'o';
  } else {
    return ' ';
  }
}


void Board::print() {
  for (int j=0; j<dim.getY(); j++) 
    for (int i=0; i<=dim.getX(); i++)
      std::cout << charAt(i, j);
}


// TODO: set the walls at the boundaries
void Board::boundaries() {
}


// TODO: allocate memory for the board
void Board::allocate() {
}


// TODO: allocate memory for adj and set pointers to adjacent tiles
void Board::associate() {
}



// TODO: advance the tile position according to the direction
void Board::advance() {
}


// TODO: bind two warp points together according to coordinates
void Board::bind (Coords c1, Coords c2) {
}

