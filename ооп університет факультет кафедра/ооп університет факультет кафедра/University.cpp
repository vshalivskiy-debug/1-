#include "University.h"

University::University(std::string n, std::string c, int y)
    : name(n), city(c), foundedYear(y) {
}

void University::show() const {
    std::cout << "Університет\n";
    std::cout << "Назва: " << name << std::endl;
    std::cout << "Місто: " << city << std::endl;
    std::cout << "Рік заснування: " << foundedYear << std::endl;
}

University::~University() {}