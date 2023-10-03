#include "Cell.h"

Cell::Cell() {}

Cell::Cell(float cellColorIndex) : colorIndex(cellColorIndex) {}

Cell::Cell(Type cellType) : type(cellType) {
    switch (type) {
        case SOLID:
            colorIndex = 32.0f/64.0f;
            // color.r = 0.3f;
            // color.g = 0.3f;
            // color.b = 0.3f;
            break;
        case SAND:
            colorIndex = 9.0f/64.0f;
            // color.r = 0.7f;
            // color.g = 0.7f;
            // color.b = 0.3f;
            break;
        case WATER:
            colorIndex = 18.0f/64.0f;
            // color.r = 0.0f;
            // color.g = 0.1f;
            // color.b = 0.7f;
            break;
    }
}