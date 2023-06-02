#ifndef FACTORYMAKER_H
#define FACTORYMAKER_H
#include "shape.h"
#include "abstractfactory.h"
enum FactoryType {
    shape2D,
    shape3D
};
class FactoryMaker {
public:
    static Abstractfactory* getFactory(FactoryType type);
    
};
#endif