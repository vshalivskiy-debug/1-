#pragma once
#include <string>
#include <iostream>

class University {
protected:
    std::string name;
    std::string city;
    int foundedYear;

public:
    University(std::string n, std::string c, int y);
    virtual void show() const;      // поліморфізм
    virtual ~University();          // віртуальний деструктор
};