#include "abstractfactory.h"
#include "rectangleshape3d.h"
#include "circleshape3d.h"
#include "shapefactory3d.h"

Shape* Shapefactory3d::getShape(Shapetype type) {

  Shape *shape = NULL;

  switch (type)
  {
  case Rectangle:
    shape = new Rectangleshape3d();
    break;
  
  case Circle:
    shape = new Circleshape3d();
    break;
  default:
      break;
  }
  return shape;
}