//
// Created by Ola Steen on 2018-09-12.
//

#include "../Headers/colordbl.h"

colordbl::colordbl()
{
    color = glm::vec3(0.0, 0.0, 0.0);
}

colordbl::colordbl(double R, double G, double B)
{
    color = glm::vec3(R, G, B);
}