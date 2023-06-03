#include "abstractfactory.h"
#include "rectangleshape2d.h"
#include "circleshape2d.h"
#include "shapefactory2d.h"

Shapefactory2d* Shapefactory2d::instance = nullptr;

Shapefactory2d::Shapefactory2d(){}

Shapefactory2d* Shapefactory2d::GetInstance()
{
    if(instance ==nullptr){
        instance = new Shapefactory2d();
    }
    return instance;
}

Shape* Shapefactory2d::getShape(Shapetype type) {

  Shape *shape = NULL;

  switch (type)
  {
  case Rectangle:
    shape = Rectangleshape2d::GetInstance();
    break;
  
  case Circle:
    shape = Circleshape2d::GetInstance();
    break;
    
  default:
      break;
  }
  return shape;
}