#include "Tile.h"


Tile::Tile() {
  warp = wall = false;
}


Tile::Tile(int wall, int warp) {
  this->wall = wall;
  this->warp = warp;
}


int Tile::getWall() {
  return wall;
}


int Tile::getWarp() {
  return warp;
}


void Tile::setWall(int wall) {
  this->wall = wall;
}


void Tile::setWarp(int warp) {
  this->warp = warp;
}


void Tile::setAdjacent(Tile **adj) {
  this->adj = new Tile *[4];
  for (int i=0; i<4; i++)
    this->adj[i] = adj[i];
}


Tile **Tile::getAdjacent() {
  return adj;
}
