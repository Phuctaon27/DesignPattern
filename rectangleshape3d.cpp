#include "rectangleshape3d.h"

Rectangleshape3d* Rectangleshape3d::instance = nullptr;

Rectangleshape3d::Rectangleshape3d(){}

Rectangleshape3d* Rectangleshape3d::GetInstance()
{
    if(instance ==nullptr){
        instance = new Rectangleshape3d();
    }
    return instance;
}

std::string  Rectangleshape3d::getShape(){
    return name;
}

void Rectangleshape3d::setshape(std::vector<int> a)
{
    parameter.clear();
    parameter = a;
}

std::vector<int> Rectangleshape3d::getparameter()
{
    return this->parameter;
}

