#ifndef RECTANGLESHAPE3D_H
#define RECTANGLESHAPE3D_H

#include "shape.h"
#include <iostream>
#include <vector>

class Rectangleshape3d : public Shape {
    private:
        std::string name = "3drectangle";
        static Rectangleshape3d* instance;
        Rectangleshape3d();
        std::vector<int> parameter;
        
    public:
        Rectangleshape3d(Rectangleshape3d &other) = delete;
        void operator=(const Rectangleshape3d &) = delete;
        static Rectangleshape3d *GetInstance();

        std::string getShape();
        void setshape(std::vector<int> a) override;
        std::vector<int> getparameter() override;
};
#endif