
#ifndef PROJECT_TRIANGLE_H
#define PROJECT_TRIANGLE_H

#include "direction.h"
#include "ray.h"


//TODO: make a proper constructor


class triangle {
    friend class camera;

private:

    vertex t_vertices[3];
    colordbl t_color;
    direction t_normal;

public:
    triangle();
    triangle(vertex v1, vertex v2, vertex v3, colordbl color, direction norm);
    vertex rayIntersection(ray arg);
    colordbl getColor();

};


#endif //PROJECT_TRIANGLE_H
