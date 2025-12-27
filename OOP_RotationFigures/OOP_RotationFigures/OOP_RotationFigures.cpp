#include <iostream>
#include <locale>
#include "Cone.h"

int main() {
    setlocale(LC_ALL, "");

    RotationFigure* figures[3];

    figures[0] = new Cone(3.0, 5.0);
    figures[1] = new Cone(2.5, 4.0);
    figures[2] = new Cone(4.0, 6.5);

    std::cout << "=== Фігури обертання ===\n\n";

    for (int i = 0; i < 3; i++) {
        figures[i]->show();
        std::cout << "----------------------\n";
    }

    for (int i = 0; i < 3; i++) {
        delete figures[i];
    }

    return 0;
}