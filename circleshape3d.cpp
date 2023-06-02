#include "circleshape3d.h"

Circleshape3d* Circleshape3d::instance = nullptr;

Circleshape3d::Circleshape3d(){}

Circleshape3d* Circleshape3d::GetInstance()
{
    if(instance ==nullptr){
        instance = new Circleshape3d();
    }
    return instance;
}

std::string Circleshape3d::getShape(){
   return name;
}

void Circleshape3d::setshape(std::vector<int> a)
{
   setRadius(a[0]);

}
