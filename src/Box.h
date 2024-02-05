#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include <utility>

class Pieces;

class Box {
    const int ROW;
    const int COL;
  public:
    Box(int row, int col);
    void empty();
    bool isEmpty();
    int getRow();
    int getCol();
};

#endif
