//
// Created by yucjo on 5/15/2021.
//

#include "Engine.h"
#include <iostream>

Engine::Engine(int width, int height) {
    SCREEN_WIDTH = width;
    SCREEN_HEIGHT = height;
    running = true;
}

void Engine::run() {
    init();
    while (running) {
        //process input
        while (SDL_PollEvent(&event) != 0) {
            switch(event.type) {
                case SDL_QUIT:
                    running = false;
            }
        }

        //simulate
        double currentTick = ( (double)SDL_GetTicks() )/1000;
        double delta = currentTick-lastTick;
        lastTick = currentTick;
        physics.step(delta);
        updateGraphics();
        SDL_Delay(1000/60);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}


void Engine::init() {
    lastTick = (double)SDL_GetTicks()/1000; //TODO: what is the conversion for units?
    physics = Physics();
    initGraphics();

    //TODO: figure out file format so you can jsut read file->create world
    Box* cube = new Box(200, 200, 40, 40, renderer);
    cube->mass = 10;
    cube->angularMomentum = 10;
    Box* floor = new Box(80, 200, 80, 80, renderer);
    //floor->anchored = true;
    floor->color = {0xFF, 0, 0, 0xFF};

    addEntity(cube);
    addEntity(floor);
}
void Engine::initGraphics() {
    //TODO: implement exception handling so this doesn't go uncaught
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        //return 1;
    }
    //create window
    window = SDL_CreateWindow("Engine",
                              SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH, SCREEN_HEIGHT,
                              SDL_WINDOW_SHOWN);
    if( window == nullptr ){
        std::cout<< "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        //return 1;
    }

    surface = SDL_GetWindowSurface(window);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED );
    SDL_FillRect(surface, nullptr, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF ));
    SDL_UpdateWindowSurface(window);
}

void Engine::updateGraphics() {
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer);

    for (Entity* object : entities) {
        object->draw();
    }
    SDL_RenderPresent(renderer);
}

void Engine::addEntity(Entity* newEntity) {
    physics.addEntity(newEntity);
    entities.push_back(newEntity);
}

