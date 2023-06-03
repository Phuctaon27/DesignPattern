#ifndef RECTANGLESHAPE2D_H
#define RECTANGLESHAPE2D_H

#include "shape.h"
#include <iostream>
#include <vector>

class Rectangleshape2d : public Shape {
    private:
        std::string name = "2drectangle";
        static Rectangleshape2d* instance;
        std::vector<int> parameter;
        Rectangleshape2d();
    public:
        Rectangleshape2d(Rectangleshape2d &other) = delete;
        void operator = (const Rectangleshape2d &) = delete;
        static Rectangleshape2d *GetInstance();
        
        std::string getShape();
        void setshape(std::vector<int> a)override;
        std::vector<int> getparameter() override;
};
#endif