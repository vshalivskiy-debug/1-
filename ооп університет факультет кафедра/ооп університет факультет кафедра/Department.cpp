#include "Department.h"

Department::Department(std::string n, std::string c, int y,
    std::string f, std::string d, int s,
    std::string dep, std::string h, int t)
    : Faculty(n, c, y, f, d, s),
    departmentName(dep), head(h), teachers(t) {
}

void Department::show() const {
    std::cout << "Кафедра\n";
    std::cout << "Університет: " << name << std::endl;
    std::cout << "Місто: " << city << std::endl;
    std::cout << "Рік заснування: " << foundedYear << std::endl;
    std::cout << "Факультет: " << facultyName << std::endl;
    std::cout << "Декан: " << dean << std::endl;
    std::cout << "К-сть студентів: " << students << std::endl;
    std::cout << "Кафедра: " << departmentName << std::endl;
    std::cout << "Завідувач: " << head << std::endl;
    std::cout << "К-сть викладачів: " << teachers << std::endl;
}

Department::~Department() {}