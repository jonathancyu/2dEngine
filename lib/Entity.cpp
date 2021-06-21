#include "Entity.h"

Vector2 Entity::getSupport(Vector2 d) {
    std::list<Vector2> vertices = getVertices();

    auto current = vertices.begin();
    Vector2 support = *current;
    float maxDot = support ^ d;
    for (; current != vertices.end(); ++current) {
        if ( ((*current) ^ d) > maxDot) {
            support = *current;
        }
    }
    return support;
}