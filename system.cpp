#include "system.h"

void System::addshape(Shapetype &shape,FactoryType &factory,std::vector<int> &para)
{
    Abstractfactory* absfactory = FactoryMaker::getFactory(factory);
    Shape * a = absfactory->getShape(shape);
    int index = shapelist.size();
    para.insert(para.begin(), index);
    a->setshape(para);
    saveshape(Actions::Add_Shape, a);
}

void System::saveshape(Actions actions, Shape *shape)
{
    ShapeName name;
    if(shape->getShape() == "2drectangle")
    {
        name = ShapeName::rec2D;
    }
    else if(shape->getShape() == "3drectangle")
    {
        name = ShapeName::rec3D;
    }
    else if(shape->getShape() == "2dcircle")
    {
        name = ShapeName::cir2D;
    }
    else
    {
        name = ShapeName::cir3D;
    }
    std::pair<ShapeName,vector<int>> shapePair(name,shape->getparameter());
    pair<Actions,vector<int>> pairobj (actions, shape->getparameter());
    UndoStack.push(pairobj);

}

std::vector<pair<ShapeName,vector<int>>> System::shapeparameter()
{
    return shapelist;
}

void System::changeparameter(int number,vector<int> a)
{
    int i = number -1;
    if(shapelist.at(i).first == ShapeName::rec2D)
    {
        shapelist.at(i).second.clear();
        shapelist.at(i).second = a;
    }
    else if(shapelist.at(i).first == ShapeName::rec3D)
    {
        shapelist.at(i).second.clear();
        shapelist.at(i).second = a;
    }
    else if(shapelist.at(i).first == ShapeName::cir2D)
    {
        shapelist.at(i).second.clear();
        shapelist.at(i).second = a;
    }
    else
    {
        shapelist.at(i).second.clear();
        shapelist.at(i).second = a;
    }
    pair<Actions,vector<int>> pairobj (Actions::Modify_Shape, a);
    UndoStack.push(pairobj);
}


void System::changeToUndo()
{   
    if(UndoStack.empty())
    {
        std::cout << "Nothing to do" << std::endl;
        return;
    }
    pair<Actions,vector<int>> pairobj = UndoStack.top();
    UndoStack.pop();
    if(pairobj.first == Actions::Add_Shape)
    {
        int a = pairobj.second[0];
        shapelist.erase(shapelist.begin()+a);
    }
    else if(pairobj.first == Actions::Modify_Shape)
    {
        int i = pairobj.second.at(0);
        shapelist.at(i).second = pairobj.second;
    }
    else
    {
        int i = pairobj.second.at(0);
        shapelist[i].first = pairobj.first;
        shapelist[i].second = pairobj.second;
    }
    
}

void System::changeToRedo()
{
    vectorshape.clear();
    copy(redo.begin(),redo.end(),back_inserter(vectorshape));
}

void System::deleteshape(int number)
{
    int i = number -1;
    vector<int> temp =  shapelist.at(i).second;
    pair<Actions,vector<int>> pairobj (Actions::Modify_Shape, temp);
    UndoStack.push(pairobj);
    shapelist.erase(shapelist.begin()+i);
}