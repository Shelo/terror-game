#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
#include "vector2.h"

class Entity
{
private:
    Vector2 position;

public:
    Entity(float x, float y);

    ~Entity()
    {
        std::cout << "Entity destroyed" << std::endl;
    }
};

#endif // ENTITY_H
