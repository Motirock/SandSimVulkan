#include "Grid.h"

Grid::Grid() {
    for (int x = 0; x < gridWidth; x++) {
        for (int y = 0; y < gridHeight; y++) {
            getCell(x, y) = Cell(Element(WATER, LIQUID));
        }
    }
}

Grid::~Grid() {}

Cell& Grid::getCell(int x, int y) {
    return cellGrid[x*gridHeight+y];
}
