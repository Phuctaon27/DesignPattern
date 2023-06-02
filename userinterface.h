#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include <vector>
#include <utility>
#include "abstractfactory.h"
#include "shapefactory2d.h"
#include "shapefactory3d.h"
#include "shape.h"
#include "system.h"
#include "factoryMaker.h"

class Userinterface{
    private:
        System system;
    public:

        void show();
        void addshape();
        void deleteshape();
        void listshape();
        void modifyshape();
        void undo();
        void redo();
    
};
#endif