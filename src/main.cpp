#include <iostream>
#include <SDL2/SDL.h>
#include <cmath>
#include <Box.h>
#include <Physics.h>

const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 400;

int main(int argc, char *argv[]) {
    SDL_Window* window = nullptr;
    SDL_Surface* screenSurface = nullptr;

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    //create window
    window = SDL_CreateWindow("Engine",
                              SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH, SCREEN_HEIGHT,
                              SDL_WINDOW_SHOWN);
    if( window == nullptr ){
        std::cout<< "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        return 1;
    }
    screenSurface = SDL_GetWindowSurface(window);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED );
    SDL_FillRect(screenSurface, nullptr, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF ));
    SDL_UpdateWindowSurface(window);
    bool quit = false;
    SDL_Event e;

    Box cube = Box(20, 20, 40, 40);
    cube.mass = 10;
    Box floor = Box(10, 100, 40, 40);
    floor.anchored = true;
    floor.color = {0xFF, 0, 0, 0xFF};

    Physics physics = Physics();
    physics.addEntity(&cube);
    physics.addEntity(&floor);
    double lastTick = (double)SDL_GetTicks()/1000;//TODO; velocity in milliseconds or seconds?

    while (!quit) {
        //take input
        while (SDL_PollEvent(&e) != 0) {
            switch(e.type) {
                case SDL_QUIT:
                    quit = true;
            }
        }
        //simulate
        double currentTick = ( (double)SDL_GetTicks() )/1000;
        double delta = currentTick-lastTick;
        lastTick = currentTick;
        physics.step(delta);
        //draw things

        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
        SDL_RenderClear(renderer);
        cube.draw(renderer);
        floor.draw(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(1000/10);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

void close() {

}