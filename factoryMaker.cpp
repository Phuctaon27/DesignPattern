#include "factoryMaker.h"
#include "shapefactory2d.h"
#include "shapefactory3d.h"
#include "abstractfactory.h"

Abstractfactory* FactoryMaker::getFactory(FactoryType type) {
  Abstractfactory *factory = nullptr;
  switch (type)
  {
  case shape2D:
    factory = Shapefactory2d::GetInstance();
    break;

  case shape3D:
    factory = new Shapefactory3d();
    break;

  default:
      break;
  }
  return factory;
}