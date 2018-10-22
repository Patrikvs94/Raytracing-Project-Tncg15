#pragma once

#include "ray.h"

class pixel {

public:
    pixel();
    pixel(ray r);
    static const int numOfRays = 1;
    ray& getrays(int index);
    void setcolor(colordbl pixelColor);
    colordbl getColor();

private:
    colordbl p_color;
    ray rays[numOfRays];


};

