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
    double left;
    double right;
    double bottom;
    double top;
};
struct Force;

class Entity {
public:
    std::string Name;
    std::string ClassName;
    SDL_Color color;

    bool anchored = false;
    //constant quantities
    double mass;
    double inertiaTensor;
    //State variables
    Vector2 position, momentum; //position of center of mass
    double theta, angularMomentum;
    Matrix rotationMatrix;
    Vector2 force, torque;

    std::list<Force*> forces;

    Entity() {}
    virtual ~Entity() {}
    virtual Entity* clone() { return nullptr; }

    //physics functions
    virtual BoundingBox getBounds() { return {}; }
    Vector2 getSupport(Vector2 d);

    virtual void computeRotationMatrix() {};

    //rendering stuff
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    virtual void draw() {};

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
