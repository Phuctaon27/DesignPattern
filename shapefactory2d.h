#ifndef SHAPEFACTORY2D_H
#define SHAPEFACTORY2D_H

#include "shape.h"
#include "abstractfactory.h"

class Shapefactory2d: public Abstractfactory {
    private: 
        static Shapefactory2d* instance;
        Shapefactory2d();
public:
    Shapefactory2d(Shapefactory2d &other) = delete;
    void operator=(const Shapefactory2d &) = delete;
    static Shapefactory2d *GetInstance();
    Shape* getShape(Shapetype type)override;
};
#endif