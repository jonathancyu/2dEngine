//
// Created by yucjo on 5/12/2021.
//

#include "Physics.h"
#include "Math/Vector2.h"
#include <list>

#define GRAVITY Vector2(0, 98)

Physics::Physics() {
    entities = std::list<Entity*>();
}

void Physics::addEntity(Entity* newEntity) {
    entities.push_back(newEntity);
}


void Physics::step(float delta) {
    //make things do things
    for (Entity* current : entities) {
        if (current->anchored) continue;

        //simulate force
        Force netForce{};
        for (Force* f : current->forces) {
            netForce += *f;
        }

        auto acceleration = GRAVITY;
        acceleration += netForce.magnitude / current->mass;


        //collision broad phase
        //TODO: implement data structure to be better than O(n^2)

        auto collisions = std::list<Entity*>();
        for (Entity* other : entities) {
            if (current == other) continue;
            if (colliding(current, other)) {
                collisions.push_back(other);
            }
        }


        //collision narrow phase

        //handle collisions
        for (Entity* other : collisions) {

        }


        //calculate new position and velocity
        if (collisions.empty()) {
            current->velocity = current->velocity + acceleration * delta;
            current->position = current->position + current->velocity * delta;

        }

    }
}

bool Physics::colliding(Entity* objA, Entity* objB) {
    BoundingBox a = objA->getBounds();
    BoundingBox b = objB->getBounds();

    if ((b.left > a.right) || (b.bottom > a.top)) return false;
    if ((a.left > b.right) || (b.bottom > b.top)) return false;
    return true;
}