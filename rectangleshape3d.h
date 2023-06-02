#ifndef RECTANGLESHAPE3D_H
#define RECTANGLESHAPE3D_H

#include "shape.h"
#include <iostream>
#include <vector>

class Rectangleshape3d : public Shape {
    private:
        std::string name = "3drectangle";
public:
    std::string getShape();
    void setshape(std::vector<int> a) override;
};
#endif