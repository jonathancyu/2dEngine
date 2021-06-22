//
// Created by yucjo on 5/15/2021.
//

#ifndef ENGINE_BOX_H
#define ENGINE_BOX_H


#include "Entity.h"
#include <SDL2/SDL.h>
#define DENSITY 1

class Box : public Entity {
public:
    int width, height;
    SDL_Rect fillRect;

    Box(int x, int y, int w, int h, SDL_Renderer* r);
    Box(SDL_Renderer* r);
    Box(int w, int h, SDL_Renderer* r);
    ~Box();


    Entity* clone();

    BoundingBox getBounds() override;
    void computeRotationMatrix() override;

    void draw() override;

private:
    void computeInertiaTensor();
    std::list<Vector2> getVertices() override;

    void SDL_init(SDL_Renderer *renderer);
    void SDL_update();
};


#endif //ENGINE_BOX_H
