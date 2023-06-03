#ifndef CIRCLESHAPE3D_H
#define CIRCLESHAPE3D_H

#include "shape.h"
#include "vector"
class Circleshape3d : public Shape {
    private:
        std::string name = "3dcircle";
        static Circleshape3d* instance;
        Circleshape3d();
        std::vector<int> parameter;

    public:
        Circleshape3d(Circleshape3d &other) = delete;
        void operator=(const Circleshape3d &) = delete;
        static Circleshape3d *GetInstance();
        std::string getShape();
        void setshape(std::vector<int> a)override;
        std::vector<int> getparameter() override;
};
#endif