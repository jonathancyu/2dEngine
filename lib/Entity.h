//
// Created by yucjo on 5/12/2021.
//

#ifndef ENGINE_ENTITY_H
#define ENGINE_ENTITY_H

#include <list>
#include <string>
#include <SDL2/SDL.h>
#include "Math/Vector2.h"
#include "Math/Quaternion.h"

struct BoundingBox {;
    float left;
    float right;
    float bottom;
    float top;
};
struct Force;

class Entity {
public:
    std::string Name;
    std::string ClassName;
    SDL_Color color;

    float mass;
    bool anchored = false;
    //Inertial matrices
    Matrix Ibody, Ibodyinv;
    //State variables
    Vector2 position;
    Matrix rotation;
    Vector2 momentum;
    Vector2 angularmomentum;
    //Derived quantities
    Matrix Iinv;
    Vector2 angularVelocity;

    Vector2 velocity;

    Vector2 force, torque;

    std::list<Force*> forces;

    Entity() {}
    virtual ~Entity() {}
    virtual Entity* clone() { return nullptr; }
    virtual void destroy() {}

    //physics functions
    virtual BoundingBox getBounds() { return {}; }
    Vector2 getSupport(Vector2 d);

    void computeVariables() {
        velocity = momentum/mass;
        Iinv = rotation * Ibodyinv * rotation.transpose();
    }
private:
    virtual std::list<Vector2> getVertices() {
        return {};
    }
};

struct Force {
    Entity* actor;
    Vector2 magnitude;

    Force operator+= (const Force& right) {
        magnitude += right.magnitude;
        return *this;
    }
};

#endif //ENGINE_ENTITY_H
