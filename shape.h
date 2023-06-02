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
        /*virtual int getWidth()=0;
        virtual void setWidth(int w)=0;
        virtual int getHeight()=0;
        virtual void setHeight(int h)=0;
        virtual int getLength()=0;
        virtual void setLength(int l)=0;
        virtual int getRadius()=0;
        virtual void setRadius(int r)=0;*/
};
#endif