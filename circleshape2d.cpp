#include "circleshape2d.h"

std::string Circleshape2d::getShape(){
   return name;
}

void Circleshape2d::setshape(std::vector<int> a)
{
   setRadius(a[0]);
}  