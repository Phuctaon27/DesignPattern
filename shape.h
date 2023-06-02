#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <vector>

enum Shapetype {
    Rectangle,
    Circle
};
class Shape {
    private:
        int width, height, length, radius;
    public:    
        virtual std::string getShape()=0;
        virtual void setshape(std::vector<int> a)=0;
        int getWidth()
        {
            return this->width;
        }
        void setWidth(int w)
        {
            this->width = w;
        }
        int getHeight()
        {
            return this->height;
        }
        void setHeight(int h)
        {
            this->height = h;
        }
        int getLength()
        {
            return this->length;
        }
        void setLength(int l)
        {
            this->length = l;
        }
        int getRadius()
        {
            return this->radius;
        }
        void setRadius(int r)
        {
            this->radius = r;
        }
};
#endif