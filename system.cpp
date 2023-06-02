#include "system.h"

void System::addshape(Shapetype &shape,FactoryType &factory,std::vector<int> &para)
{
    Abstractfactory* absfactory = FactoryMaker::getFactory(factory);
    Shape * a = absfactory->getShape(shape);
    a->setshape(para);
    saveshape(a);
}

void System::saveshape(Shape *shape)
{
    
    vectorshape.push_back(shape);
    undo.clear();
    copy(vectorshape.begin(),vectorshape.end(),back_inserter(undo));
    redo.clear();
    copy(vectorshape.begin(),vectorshape.end(),back_inserter(redo));
}

std::vector<Shape*> System::shapeparameter()
{
    return vectorshape;
}

void System::changeparameter(int number,vector<int> a)
{
    int i = number -1;
    //vector<Shape*> temp;
    undo.clear();
    copy(vectorshape.begin(),vectorshape.end(),back_inserter(undo));
    
    Shape *c;
    if(vectorshape.at(i)->getShape() == "2drectangle")
    {
        Abstractfactory* absfactory = FactoryMaker::getFactory(FactoryType::shape2D);
        c = absfactory->getShape(Shapetype::Rectangle);

        c->setLength(a[0]);
        c->setWidth(a[1]); 
    }
    else if(vectorshape.at(i)->getShape() == "3drectangle")
    {
        Abstractfactory* absfactory = FactoryMaker::getFactory(FactoryType::shape3D);
        c = absfactory->getShape(Shapetype::Rectangle);
        c->setLength(a[0]);
        c->setHeight(a[2]);
        c->setWidth(a[1]); 
    }
    else if(vectorshape.at(i)->getShape() == "2dcircle")
    {
        Abstractfactory* absfactory = FactoryMaker::getFactory(FactoryType::shape2D);
        c = absfactory->getShape(Shapetype::Circle);
        c->setRadius(a[0]); 
    }
    else
    {
        Abstractfactory* absfactory = FactoryMaker::getFactory(FactoryType::shape3D);
        c = absfactory->getShape(Shapetype::Circle);
        c->setRadius(a[0]); 
    }

    //vectorshape.push_back(c);
    vectorshape.erase(vectorshape.begin()+i);
    vectorshape.insert(vectorshape.begin()+(i),c);

    redo.clear();
    copy(vectorshape.begin(),vectorshape.end(),back_inserter(redo));

    /*cout << "end change" << endl;
    for(auto val:undo)
    {
        cout << val->getRadius() << " ";
    }
    cout << "/n____________"<<endl;
    for(auto val:vectorshape)
    {
        cout << val->getRadius() << " ";
    }
    cout << "/n____________"<<endl;
    for(auto val:redo)
    {
        cout << val->getRadius() << " ";
    }
    cout << "/n____________"<<endl;*/
}


void System::changeToUndo()
{   
    vectorshape.clear();
    copy(undo.begin(),undo.end(),back_inserter(vectorshape));
}

void System::changeToRedo()
{
    vectorshape.clear();
    copy(redo.begin(),redo.end(),back_inserter(vectorshape));
}

void System::deleteshape(int number)
{
    int i = number -1;
    vectorshape.erase(vectorshape.begin()+i);
    redo.clear();
    copy(vectorshape.begin(),vectorshape.end(),back_inserter(redo));
}