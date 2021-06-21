//
// Created by yucjo on 5/15/2021.
//
//TODO: center of mass should be at position
//todo: then add 2x2 rotation matrix R(x)
//for an arbitrary point p_0 on box,
//p(t) = R(t)p_0 + x(t)
#include "Box.h"

Box::Box(int x, int y, int w, int h) {
    color = {0, 0, 0, 0};
    position = Vector2(x, y);
    velocity = Vector2(0, 0);
    width = w;
    height = h;
    setSDL_Rect();
}

Box::Box() : Box(0, 0, 0, 0){}
Box::Box(int w, int h) : Box(0, 0, w, h) {}

Box::~Box() {}


void Box::setSDL_Rect() {//TODO: maybe round instead of truncate?
    SDLObject = { (int)position.x, (int)position.y, width, height };
}

void Box::draw(SDL_Renderer* renderer) {
    setSDL_Rect();
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
    SDL_RenderFillRect(renderer, &SDLObject);
}

Entity* Box::clone() {
    return new Box();
}

void Box::destroy() {

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