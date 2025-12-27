#pragma once
#include "University.h"

class Faculty : public University {
protected:
    std::string facultyName;
    std::string dean;
    int students;

public:
    Faculty(std::string n, std::string c, int y,
        std::string f, std::string d, int s);

    void show() const override;
    ~Faculty() override;
};