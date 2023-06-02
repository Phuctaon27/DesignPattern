#include "rectangleshape2d.h"

std::string  Rectangleshape2d::getShape(){
    return name;
}

void Rectangleshape2d::setshape(std::vector<int> a)
{
    setLength(a[0]);
    setWidth(a[1]);
}