//
// Created by yucjo on 5/15/2021.
//
//TODO: center of mass should be at position
//todo: then add 2x2 rotation matrix R(x)
//for an arbitrary point p_0 on box,
//p(t) = R(t)p_0 + x(t)
#include "Box.h"
#include <cmath>

Box::Box(int x, int y, int w, int h, SDL_Renderer* r) {
    color = {0, 0, 0, 0};
    position = Vector2(x, y);
    width = w;
    height = h;
    mass = width*height*DENSITY;
    theta = 0;

    computeInertiaTensor();
    renderer = r;
    SDL_init(renderer);
}

Box::Box(SDL_Renderer* r) : Box(0, 0, 0, 0, r){}
Box::Box(int w, int h, SDL_Renderer* r) : Box(0, 0, w, h, r) {}

Box::~Box() {
    SDL_DestroyTexture(texture);
}


void Box::SDL_init(SDL_Renderer* renderer) {//TODO: maybe round double instead of truncate?
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 600, 400);
}

void Box::SDL_update() {
    fillRect = { (int)position.x - (width/2), (int)position.y - (height/2), width, height };
}

void Box::draw() {
    SDL_update();
    SDL_SetRenderTarget(renderer, texture);
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderClear(renderer);
    SDL_RenderFillRect( renderer, &fillRect );
    SDL_SetRenderTarget(renderer, nullptr);
    SDL_Point center = {width/2, height/2};
    SDL_RenderCopyEx( renderer, texture, &fillRect, &fillRect, theta, &center, SDL_FLIP_NONE);;
}

Entity* Box::clone() {
    return new Box(renderer);
}

void Box::computeRotationMatrix() {
    rotationMatrix[0][0] = cos(theta);
    rotationMatrix[0][1] = -sin(theta);
    rotationMatrix[1][0] = sin(theta);
    rotationMatrix[1][1] = cos(theta);
}

void Box::computeInertiaTensor() {
    //integral over surface of r^2
    //integral(integral(x^2+y^2, y, -height/2, height/2), x, -width/2, width/2)
    //1/12(w^3h + wh^3) = (1/12) (wh)(w^2 + h^2)
    inertiaTensor = (1.f/12) * (double)((width*height) * (width*width + height*height));
}


BoundingBox Box::getBounds() {
    return (BoundingBox) {position.x,
                          position.x + width,
                          position.y,
                          position.y + height};
}

std::list<Vector2> Box::getVertices() {
    auto vertices = std::list<Vector2>();
    vertices.emplace_back(position.x, position.y);
    vertices.emplace_back(position.x, position.y + height);
    vertices.emplace_back(position.x + width, position.y);
    vertices.emplace_back(position.x + width, position.y + height);
    return vertices;
}