#ifndef PROJECTILE_CLASS_H
#define PROJECTILE_CLASS_H

#include "Grid.h"
#include <string>

class Projectile {
public:
    float x, y;
    float vx, vy;
    int health = 100;
    bool alive = true;
    
    Grid *grid;

    Projectile(Grid *cellGrid, float projectileX, float projectileY, float projectileVx, float projectileVy);
    ~Projectile();

    void updatePosition();

    std::string toString();
};


#endif