#pragma once
#include "Faculty.h"

class Department : public Faculty {
private:
    std::string departmentName;
    std::string head;
    int teachers;

public:
    Department(std::string n, std::string c, int y,
        std::string f, std::string d, int s,
        std::string dep, std::string h, int t);

    void show() const override;
    ~Department() override;
};
