#ifndef CIRCLESHAPE3D_H
#define CIRCLESHAPE3D_H

#include "shape.h"
#include "vector"
class Circleshape3d : public Shape {
    private:
        std::string name = "3dcircle";
    public:
        std::string getShape();
        void setshape(std::vector<int> a)override;
};
#endif