#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Ingrese lado 1: ";
    std::cin >> a;
    std::cout << "Ingrese lado 2: ";
    std::cin >> b;
    std::cout << "Ingrese lado 3: ";
    std::cin >> c;

    // Verificar si es triangulo valido
    if (a + b > c && a + c > b && b + c > a) {

        std::cout << "Es un triangulo valido\n";

        // Clasificacion por lados
        if (a == b && b == c) {
            std::cout << "Tipo: Equilatero\n";
        }
        else if (a == b  a == c 
 b == c) {
            std::cout << "Tipo: Isosceles\n";
        }
        else {
            std::cout << "Tipo: Escaleno\n";
        }

        // Clasificacion por angulos usando pow()
        double a2 = pow(a, 2);
        double b2 = pow(b, 2);
        double c2 = pow(c, 2);

        if (a2 + b2 == c2  a2 + c2 == b2 
 b2 + c2 == a2) {
            std::cout << "Es Rectangulo\n";
        }
        else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
            std::cout << "Es Acutangulo\n";
        }
        else {
            std::cout << "Es Obtusangulo\n";
        }

    }
    else {
        std::cout << "No es un triangulo valido\n";
    }

    return 0;
}
