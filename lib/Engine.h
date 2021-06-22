//
// Created by yucjo on 5/15/2021.
//

#ifndef ENGINE_ENGINE_H
#define ENGINE_ENGINE_H

#include <SDL2/SDL.h>
#include "Box.h"
#include "Physics.h"
#include <exception>

class Engine {
public:
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;
    Engine(int width, int height);
    void run();
private:
    bool running = false;
    double scale = 1;
    double lastTick;

    SDL_Window* window;
    SDL_Surface* surface;
    SDL_Renderer* renderer;
    SDL_Event event;

    std::list<Entity*> entities;
    Physics physics;
    void init();
    void initGraphics();
    void updateGraphics();

    void addEntity(Entity* newEntity);

};


#endif //ENGINE_ENGINE_H
