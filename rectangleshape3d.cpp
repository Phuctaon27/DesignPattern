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
    this->Width = a[0];
    this->Width = a[1];
    this->Width = a[2];
}

