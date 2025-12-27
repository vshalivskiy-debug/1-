#pragma once
#include "RotationFigure.h"

class Cone : public RotationFigure {
private:
    double radius;
    double height;

public:
    Cone(double r, double h);
    double volume() const override;
    void show() const override;
    ~Cone() override;   // ❗ ОБОВʼЯЗКОВО
};