#ifndef RECTANGLESHAPE2D_H
#define RECTANGLESHAPE2D_H

#include "shape.h"
#include <iostream>
#include <vector>

class Rectangleshape2d : public Shape {
    private:
        std::string name = "2drectangle";
    public:
        std::string getShape();
        void setshape(std::vector<int> a)override;
};
#endif