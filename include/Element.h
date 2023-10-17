#ifndef ELEMENT_CLASS_H
#define ELEMENT_CLASS_H

enum Type : unsigned short {AIR, WATER, SAND, SOLID};
enum State : unsigned short {GAS, LIQUID, SOLID_FALLING, SOLID_STATIC};

struct Element {
    Type type;
    State state;
    float colorIndex = -1.0f;

    Element(Type type, State state) {
        this->type = type;
        //State is always gas if type is air
        this->state = type != AIR ? state : GAS;

        update();
    }

    void update() {
        if (type == SOLID) {
            if (state == GAS)
                colorIndex = 5.0f/64.0f;
            else if (state == LIQUID)
                colorIndex = 5.0f/64.0f;
            else if (state == SOLID_FALLING)
                colorIndex = 42.0f/64.0f;
            else if (state == SOLID_STATIC)
                colorIndex = 43.0f/64.0f;
        }
        else if (type == SAND) {
            if (state == GAS)
                colorIndex = 5.0f/64.0f;
            else if (state == LIQUID)
                colorIndex = 5.0f/64.0f;
            else if (state == SOLID_FALLING)
                colorIndex = 9.0f/64.0f;
            else if (state == SOLID_STATIC)
                colorIndex = 8.0f/64.0f;
        }
        else if (type == WATER) {
            if (state == GAS)
                colorIndex = 48.0f/64.0f;
            else if (state == LIQUID)
                colorIndex = 18.0f/64.0f;
            else if (state == SOLID_FALLING)
                colorIndex = 50.0f/64.0f;
            else if (state == SOLID_STATIC)
                colorIndex = 51.0f/64.0f;
        }
    }

    void setType(Type type) {
        this->type = type;
        update();
    }

    void setState(State state) {
        this->state = state;
        update();
    }
};

#endif