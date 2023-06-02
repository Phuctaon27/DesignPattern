#include "rectangleshape3d.h"

std::string  Rectangleshape3d::getShape(){
    return name;
}

void Rectangleshape3d::setshape(std::vector<int> a)
{
    setLength(a[0]);
    setWidth(a[1]);
    setHeight(a[2]);
}
