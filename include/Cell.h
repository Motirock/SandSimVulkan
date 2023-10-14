#ifndef CELL_CLASS_H
#define CELL_CLASS_H

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/hash.hpp>

#include "Element.h"

struct Cell {
    Element element = Element(AIR, GAS);
    glm::vec3 color = glm::vec3(1.0f);
    bool updated = false;
    float colorIndex = -1.0f;

    Cell();
    Cell(float cellColorIndex);
    Cell(Element cellElement);
};



#endif