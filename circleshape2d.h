#ifndef CIRCLESHAPE2D_H
#define CIRCLESHAPE2D_H

#include "shape.h"
#include <iostream>
#include <vector>

class Circleshape2d : public Shape {
    private:
    std::string name = "2dcircle";
    std::vector<int> parameter;
    static Circleshape2d* instance;
        Circleshape2d();
    public:
        Circleshape2d(Circleshape2d &other) = delete;
        void operator=(const Circleshape2d &) = delete;
        static Circleshape2d *GetInstance();

        std::string getShape();
        void setshape(std::vector<int> a) override;
        std::vector<int> getparameter() override;
};
#endif