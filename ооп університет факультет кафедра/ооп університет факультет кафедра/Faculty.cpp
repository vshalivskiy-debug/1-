#include "Faculty.h"

Faculty::Faculty(std::string n, std::string c, int y,
    std::string f, std::string d, int s)
    : University(n, c, y), facultyName(f), dean(d), students(s) {
}

void Faculty::show() const {
    std::cout << "Факультет\n";
    std::cout << "Університет: " << name << std::endl;
    std::cout << "Місто: " << city << std::endl;
    std::cout << "Рік заснування: " << foundedYear << std::endl;
    std::cout << "Факультет: " << facultyName << std::endl;
    std::cout << "Декан: " << dean << std::endl;
    std::cout << "К-сть студентів: " << students << std::endl;
}

Faculty::~Faculty() {}