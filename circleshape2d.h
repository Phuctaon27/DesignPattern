#ifndef CIRCLESHAPE2D_H
#define CIRCLESHAPE2D_H

#include "shape.h"
#include <iostream>
#include <vector>

class Circleshape2d : public Shape {
    private:
    std::string name = "2dcircle";
    public:
        std::string getShape();
        void setshape(std::vector<int> a)override;
};
#endif