#include "Cone.h"
#include <iostream>

Cone::Cone(double r, double h)
    : RotationFigure("Конус"), radius(r), height(h) {
}

double Cone::volume() const {
    return 3.141592653589793 * radius * radius * height / 3.0;
}

void Cone::show() const {
    std::cout << "Фігура обертання: " << name << std::endl;
    std::cout << "Радіус основи: " << radius << std::endl;
    std::cout << "Висота: " << height << std::endl;
    std::cout << "Об'єм: " << volume() << std::endl;
}

Cone::~Cone() {
}