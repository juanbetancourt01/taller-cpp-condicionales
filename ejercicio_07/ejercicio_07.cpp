#include <iostream>

int main() {
    int anio;
    bool esBisiesto = false;

    std::cout << "Ingrese el anio: ";
    std::cin >> anio;

    if (anio % 4 == 0) {
        std::cout << "Es divisible entre 4\n";

        if (anio % 100 == 0) {
            std::cout << "Es divisible entre 100\n";

            if (anio % 400 == 0) {
                std::cout << "Es divisible entre 400\n";
                esBisiesto = true;
            } else {
                esBisiesto = false;
            }

        } else {
            esBisiesto = true;
        }

    } else {
        esBisiesto = false;
    }

    if (esBisiesto) {
        std::cout << "El anio es bisiesto\n";
    } else {
        std::cout << "El anio NO es bisiesto\n";
    }

    return 0;
}
