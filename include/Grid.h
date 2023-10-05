#ifndef GRID_CLASS_H
#define GRID_CLASS_H

#include "Cell.h"

struct Grid {
    static const uint32_t gridWidth = 200, gridHeight = 200;
    Cell *cellGrid = new Cell[gridWidth*gridHeight];

    Grid();
    ~Grid();

    Cell& getCell(int x, int y);
};


#endif