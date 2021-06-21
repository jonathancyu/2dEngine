//
// Created by yucjo on 5/15/2021.
//

#ifndef ENGINE_WORLD_H
#define ENGINE_WORLD_H


class World {
    bool running = false;
    PhysicsHandler physics;

    World();

    init();

    create();

};


#endif //ENGINE_WORLD_H
