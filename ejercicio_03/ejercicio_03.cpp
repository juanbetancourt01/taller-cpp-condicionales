#include <iostream>

int main() {
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int permisos;

    std::cout << "Ingrese valor de permisos (0-7): ";
    std::cin >> permisos;

    std::cout << "Permisos actuales:\n";

    if (permisos & LEER) {
        std::cout << "LEER activado\n";
    }

    if (permisos & ESCRIBIR) {
        std::cout << "ESCRIBIR activado\n";
    }

    if (permisos & EJECUTAR) {
        std::cout << "EJECUTAR activado\n";
    }

    if (!(permisos & LEER) && !(permisos & ESCRIBIR) && !(permisos & EJECUTAR)) {
        std::cout << "No tiene permisos\n";
    }

    return 0;
}
