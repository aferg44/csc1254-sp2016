#ifndef BOARD_H
#define BOARD_H

#include "Dir.h"
#include "Tile.h"
#include "Coords.h"

class Board {

  private:
    Dir      dir;
    Coords   dim;
    Tile    *pos;
    Tile   **map;
  
  public:
    Board();
    Board(Coords dim);

    void print();
    void initialize();
    void advance();
    void boundaries();
    void allocate();
    void associate();
    void bind(Coords, Coords);
    void setColor(const char *);
    char charAt(int i, int j);
  
};

#endif
