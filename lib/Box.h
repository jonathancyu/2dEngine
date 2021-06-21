//
// Created by yucjo on 5/15/2021.
//

#ifndef ENGINE_BOX_H
#define ENGINE_BOX_H


#include "Entity.h"
#include <SDL2/SDL.h>

class Box : public Entity {
public:
    int width, height;
    SDL_Rect SDLObject;

    Box(int x, int y, int w, int h);
    Box();
    Box(int w, int h);
    ~Box();


    Entity* clone();
    void destroy();

    BoundingBox getBounds() override;
    void draw(SDL_Renderer*);


private:
    void setSDL_Rect();
    std::list<Vector2> getVertices() override;
};


#endif //ENGINE_BOX_H
