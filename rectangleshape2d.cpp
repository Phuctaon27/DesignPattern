#include "rectangleshape2d.h"

Rectangleshape2d* Rectangleshape2d::instance = nullptr;

Rectangleshape2d::Rectangleshape2d(){}

Rectangleshape2d* Rectangleshape2d::GetInstance()
{
    if(instance ==nullptr){
        instance = new Rectangleshape2d();
    }
    return instance;
}

std::string  Rectangleshape2d::getShape(){
    return name;
}

void Rectangleshape2d::setshape(std::vector<int> a)
{
    parameter.clear();
    parameter = a;
}

std::vector<int> Rectangleshape2d::getparameter()
{
    return this->parameter;
}
