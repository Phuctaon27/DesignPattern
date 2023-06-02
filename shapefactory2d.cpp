#include "abstractfactory.h"
#include "rectangleshape2d.h"
#include "circleshape2d.h"
#include "shapefactory2d.h"

Shape* Shapefactory2d::getShape(Shapetype type) {

  Shape *shape = NULL;

  switch (type)
  {
  case Rectangle:
    shape = new Rectangleshape2d();
    break;
  
  case Circle:
    shape = new Circleshape2d();
    break;
    
  default:
      break;
  }
  return shape;
}