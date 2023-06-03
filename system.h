#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <stack>
#include "abstractfactory.h"
#include "shapefactory2d.h"
#include "shapefactory3d.h"
#include "shape.h"
#include "factoryMaker.h"
using namespace std;

enum class Actions
{
    Add_Shape,
    Delete_Shape,
    Modify_Shape,
};

enum class ShapeName
{
    rec2D,
    rec3D,
    cir2D,
    cir3D,
};

class System{
    private:
        vector<Shape*> vectorshape;
        vector<Shape*> undo;
        vector<Shape*> redo;
        vector<int> parameter;
        vector<pair<ShapeName,vector<int>>> shapelist;
        stack<pair<Actions,vector<int>>> UndoStack;

    public:
        void addshape(Shapetype &shape,FactoryType &factory,vector<int> &para);
        void saveshape(Actions actions, Shape *shape);
        void deleteshape(int number);
        vector<pair<ShapeName,vector<int>>> shapeparameter();
        void changeparameter(int number,vector<int> a);
        void changeToUndo();
        void changeToRedo();
};
#endif