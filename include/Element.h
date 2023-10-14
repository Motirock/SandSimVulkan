#ifndef ELEMENT_CLASS_H
#define ELEMENT_CLASS_H

enum Type : unsigned short {AIR, WATER, SAND, SOLID};
enum State : unsigned short {GAS, LIQUID, SOLID_FALLING, SOLID_STATIC};

struct Element {
    Type type;
    State state;

    Element(Type type, State state) {
        this->type = type;
        this->state = state;
    }
};

#endif