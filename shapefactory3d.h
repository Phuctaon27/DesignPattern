#ifndef SHAPEFACTORY3D_H
#define SHAPEFACTORY3D_H

#include "shape.h"
#include "abstractfactory.h"

class Shapefactory3d: public Abstractfactory {
public:

    Shape* getShape(Shapetype type);
    
};
#endif