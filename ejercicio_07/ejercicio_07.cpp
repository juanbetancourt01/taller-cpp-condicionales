#include <iostream>

int main() {
    int ano;
    bool esBisiesto = false;

    std::cout << "Ingrese el ano: ";
    std::cin >> ano;

    if (anio % 4 == 0) {
        std::cout << "Es divisible entre 4\n";

        if (ano % 100 == 0) {
            std::cout << "Es divisible entre 100\n";

            if (ano % 400 == 0) {
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
        std::cout << "El ano es bisiesto\n";
    } else {
        std::cout << "El ano NO es bisiesto\n";
    }

    return 0;
}
