#include "Projectile.h"

Projectile::Projectile(Grid *cellGrid, float projectileX, float projectileY, float projectileVx, float projectileVy) 
    : grid(cellGrid), x(projectileX), y(projectileY), vx(projectileVx), vy(projectileVy) {}

Projectile::~Projectile() {}

void Projectile::updatePosition() {
    x += vx;
    y += vy;

    if (x >= Grid::gridWidth) {
        vx = -vx*0.75;
        x = Grid::gridWidth+vx;
        health -= 10;
    }
    else if (x < 0) {
        vx = -vx*0.75;
        x = vx;
        health -= 10;
    }

    if (y >= Grid::gridHeight) {
        vy = -vy*0.75;
        y = Grid::gridHeight+vy;
        health -= 10;
    }
    else if (y < 0) {
        vy = -vy*0.75;
        y = vy;
        health -= 10;
    }
}

std::string Projectile::toString() {
    return "Position: <"+std::to_string(x)+", "+std::to_string(y)+"> \tVelocity: <"+std::to_string(vx)+", "+std::to_string(vy)+'>';
}