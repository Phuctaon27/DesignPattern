#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <vector>

enum Shapetype {
    Rectangle,
    Circle
};
class Shape {
 
    public:    
        virtual std::string getShape()=0;
        virtual void setshape(std::vector<int> a)=0;
        virtual std::vector<int> getparameter()=0;
};
#endif