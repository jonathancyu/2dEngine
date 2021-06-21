//
// Created by yucjo on 5/12/2021.
//

#include "Physics.h"
#include "Math/Vector2.h"
#include <list>

#define GRAVITY Vector2(0, 9.8)

Physics::Physics() {
    entities = std::list<Entity*>();
}

void Physics::addEntity(Entity* newEntity) {
    entities.push_back(newEntity);
}


//first,
void Physics::step(double delta) {
    //make things do things
    for (Entity* object : entities) {
        if (object->anchored) continue;
        //compute force and torque
        Vector2 force;
        double torque = 0.1;

        //apply forces/torques
        Vector2 velocity = GRAVITY * object->mass;
        velocity += object->momentum/object->mass;
        double angularVelocity = object->angularmomentum/object->inertiaTensor;
        object->position += velocity * delta;
        object->theta += angularVelocity * delta;

        //compute new rotation matrix
        object->computeRotationMatrix();
        //TODO: implement rectangle rotation
    }
}

bool Physics::colliding(Entity* objA, Entity* objB) {
    BoundingBox a = objA->getBounds();
    BoundingBox b = objB->getBounds();

    if ((b.left > a.right) || (b.bottom > a.top)) return false;
    if ((a.left > b.right) || (b.bottom > b.top)) return false;
    return true;
}