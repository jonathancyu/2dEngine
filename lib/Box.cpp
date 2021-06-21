//
// Created by yucjo on 5/15/2021.
//
//TODO: center of mass should be at position
//todo: then add 2x2 rotation matrix R(x)
//for an arbitrary point p_0 on box,
//p(t) = R(t)p_0 + x(t)
#include "Box.h"
#include <cmath>

Box::Box(int x, int y, int w, int h) {
    color = {0, 0, 0, 0};
    position = Vector2(x, y);
    width = w;
    height = h;
    computeInertiaTensor();
    setSDL_Rect();
}

Box::Box() : Box(0, 0, 0, 0){}
Box::Box(int w, int h) : Box(0, 0, w, h) {}

Box::~Box() {}


void Box::setSDL_Rect() {//TODO: maybe round double instead of truncate?
    SDLObject = { (int)position.x - (width/2), (int)position.y - (height/2), width, height };
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