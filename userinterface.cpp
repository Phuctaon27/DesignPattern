#include "userinterface.h"

void Userinterface::show()
{
    int menu;
    while(true)
    {
        std::cout << "====== TMA PAINT ===== \n"
                  << "1) Add new shape \n"
                  << "2) Delete a shape \n"
                  << "3) List shape already adding \n"
                  << "4) Modify parameter of a shape \n"
                  << "5) Undo \n"
                  << "6) Redo \n"
                  << "7) exit \n"
                  << "Your choice: ";
        std::cin >> menu;
        switch(menu)
        {
            case 1:
                addshape();
                break;

            case 2:
                deleteshape();              
                break;
            
            case 3:
                listshape();
                break;
            
            case 4:
                modifyshape();               
                break;

            case 5:
                undo();
                break;
            
            case 6:
                redo();
                break;
            
            case 7:
                exit(0);
                break;

            default:
                std::cout << "Please choose exiting number!!" << std::endl;
                break;
        }
    }
}

void Userinterface::addshape()
{
    int key;
    Shapetype shape;
    FactoryType type;
    int h,l,w,r;

    std::vector<int> para;
    std::cout << "Shape type \n"
              << "1) 2D shape \n"
              << "2) 3D shape \n"
              << "Your choice: ";
    std::cin >> key;
    
    switch(key)
    {
        case 1:
            type = shape2D;
            break;
        
        case 2:
            type = shape3D;
            break;
    }
    
    std::cout << "Shape ? \n"
              << "1) rectangle \n"
              << "2) circle \n"
              << "Your choice: ";
    std::cin >> key;

    switch(key)
    {
        case 1:
            shape = Rectangle;
            break;
        
        case 2:
            shape = Circle;
            break;
    }

    if(type == shape2D && shape == Rectangle)
    {
        std::cout << "Length: ";
        std::cin >> l;
        std::cout << "Width: ";
        std::cin >> w;
        para.push_back(l);
        para.push_back(w);
    }
    else if(type == shape3D && shape == Rectangle)
    {
        std::cout << "Length: ";
        std::cin >> l;
        std::cout << "Width: ";
        std::cin >> w;
        std::cout << "Heigth: ";
        std::cin >> h;
        para.push_back(l);
        para.push_back(w);
        para.push_back(h);  
    }
    else
    {
        std::cout << "Radius: ";
        std::cin >> r;
        para.push_back(r);
    }

    system.addshape(shape,type,para);
    para.clear();
    std::cout << "Successfully!" << endl;
}

void Userinterface::listshape()
{
    int i = 1;
    system.shapeparameter();

    if(system.shapeparameter().size() == 0)
    {
        std::cout << "List is empty! \n";
        return;
    }
    for(auto val:system.shapeparameter())
    {   
        std::cout << "===============================" << std::endl;
        std::cout << "Shape number: " << i << std::endl;
        std::cout << "Name: " << val->getShape() << std::endl;
        if(val->getShape() == "2drectangle")
        {
            std::cout << "Length: " << val->getLength() << std::endl;
            std::cout << "Widht: " << val->getWidth() << std::endl;
            std::cout << "===============================" << std::endl;
        }
        else if(val->getShape() == "3drectangle")
        {
            std::cout << "Length: " << val->getLength() << std::endl;
            std::cout << "Widht: " << val->getWidth() << std::endl;
            std::cout << "Heigth: " << val->getHeight() << std::endl;
            std::cout << "===============================" << std::endl;
        }
        else
        {
            std::cout << "Radius: " << val->getRadius() << std::endl;
            std::cout << "===============================" << std::endl;
        }
        i++;
    }
}

void Userinterface::modifyshape()
{
    int shapenumber;
    int l,w,h,r;
    listshape();
    std::vector <int> a;
    std::cout << "Enter shape number to modify parameter: \n";
    std::cin >> shapenumber;
    
    if(system.shapeparameter()[shapenumber-1]->getShape() == "2drectangle")
    {
        std::cout << "Enter new parameter \n"
                  << "Length: ";
        std::cin >> l;
        std::cout << "Width: ";
        std::cin >> w;
        a.push_back(l); a.push_back(w);
    }
    else if(system.shapeparameter()[shapenumber-1]->getShape() == "3drectangle")
    {
        std::cout << "Enter new parameter \n"
                  << "Length: ";
        std::cin >> l;
        std::cout << "Width: ";
        std::cin >> w;
        std::cout << "Heigth: ";
        std::cin >> h;
        a.push_back(l); a.push_back(w); a.push_back(h);
    }
    else
    {
        std::cout << "Enter new parameter \n"
                  << "Radius: ";
        std::cin >> r;
        a.push_back(r);
    }
    system.changeparameter(shapenumber,a);
    a.clear();
}

void Userinterface::undo()
{
    system.changeToUndo();
}

void Userinterface::redo()
{
    system.changeToRedo();
}

void Userinterface::deleteshape()
{
    int shapenumber;
    listshape();
    std::cout << "Enter shape number to delete!! \n";
    std::cout << "Your choice: ";
    std::cin >> shapenumber;
    system.deleteshape(shapenumber);
}