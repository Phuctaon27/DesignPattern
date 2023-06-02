#ifndef __ABSTRACTFACTORY__
#define __ABSTRACTFACTORY__
#include "shape.h"
class Abstractfactory {
public:
    virtual Shape* getShape(Shapetype type)=0;
    
};
#endif