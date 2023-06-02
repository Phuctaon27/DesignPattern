#ifndef SHAPEFACTORY2D_H
#define SHAPEFACTORY2D_H

#include "shape.h"
#include "abstractfactory.h"

class Shapefactory2d: public Abstractfactory {
public:

    Shape* getShape(Shapetype type)override;
    
};
#endif