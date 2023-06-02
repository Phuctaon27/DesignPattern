#include "circleshape3d.h"

std::string Circleshape3d::getShape(){
   return name;
}

void Circleshape3d::setshape(std::vector<int> a)
{
   setRadius(a[0]);

}
