#include "abstractfactory.h"
#include "rectangleshape3d.h"
#include "circleshape3d.h"
#include "shapefactory3d.h"


Shape* Shapefactory3d::getShape(Shapetype type) {

  Shape *shape = NULL;

  switch (type)
  {
  case Rectangle:
    shape = Rectangleshape3d::GetInstance();
    break;
  
  case Circle:
    shape = Circleshape3d::GetInstance();
    break;
  default:
      break;
  }
  return shape;
}