#include "circleshape2d.h"

Circleshape2d* Circleshape2d::instance = nullptr;

Circleshape2d::Circleshape2d(){}

Circleshape2d* Circleshape2d::GetInstance()
{
    if(instance ==nullptr){
        instance = new Circleshape2d();
    }
    return instance;
}


std::string Circleshape2d::getShape(){
   return name;
}

void Circleshape2d::setshape(std::vector<int> a)
{
    parameter.clear();
    parameter = a;
}

std::vector<int> Circleshape2d::getparameter()
{
    return this->parameter;
}
