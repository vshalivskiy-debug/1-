#pragma once
#include <string>

class RotationFigure {
protected:
    std::string name;

public:
    RotationFigure(const std::string& n);
    virtual double volume() const = 0;
    virtual void show() const = 0;
    virtual ~RotationFigure() {}   // ВАЖЛИВО: inline
};