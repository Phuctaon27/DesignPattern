#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include "abstractfactory.h"
#include "shapefactory2d.h"
#include "shapefactory3d.h"
#include "shape.h"
#include "factoryMaker.h"
using namespace std;

class System{
    private:
        vector<Shape*> vectorshape;
        vector<Shape*> undo;
        vector<Shape*> redo;
    public:
        void addshape(Shapetype &shape,FactoryType &factory,vector<int> &para);
        void saveshape(Shape *shape);
        void deleteshape(int number);
        vector<Shape* > shapeparameter();
        void changeparameter(int number,vector<int> a);
        void changeToUndo();
        void changeToRedo();
};
#endif