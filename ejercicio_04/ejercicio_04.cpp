#include <iostream>
#include <cmath>

int main() {
    double a, b;
    char operador;

    std::cout << "Ingrese primer numero: ";
    std::cin >> a;

    std::cout << "Ingrese operador (+, -, , /, %): ";
    std::cin >> operador;

    std::cout << "Ingrese segundo numero: ";
    std::cin >> b;

    switch (operador) {

        case '+':
            std::cout << "Resultado: " << a + b << std::endl;
            break;

        case '-':
            std::cout << "Resultado: " << a - b << std::endl;
            break;

        case '':
            std::cout << "Resultado: " << a * b << std::endl;
            break;

        case '/':
            if (b != 0) {
                std::cout << "Resultado: " << a / b << std::endl;
            } else {
                std::cout << "Error: division por cero\n";
            }
            break;

        case '%':
            if (b != 0) {
                std::cout << "Resultado: " << fmod(a, b) << std::endl;
            } else {
                std::cout << "Error: division por cero\n";
            }
            break;

        default:
            std::cout << "Operador no valido\n";
    }

    return 0;
}
