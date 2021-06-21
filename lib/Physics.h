//
// Created by yucjo on 5/12/2021.
//

#ifndef ENGINE_PHYSICS_H
#define ENGINE_PHYSICS_H

#include "Entity.h"
#include <list>


class Physics {
private:
    std::list<Entity*> entities;

public:
    Physics();
    ~Physics() = default;

    void addEntity(Entity*);

    void step(double delta);

    static bool colliding(Entity* a, Entity* b);
};



#endif //ENGINE_PHYSICS_H
