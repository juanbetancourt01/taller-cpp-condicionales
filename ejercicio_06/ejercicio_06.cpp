#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    std::cout << "Valores iniciales: a = " << a << ", b = " << b << std::endl;

    // Metodo 1: Variable temporal
    {
        int x = a;
        int y = b;

        int temp = x;
        x = y;
        y = temp;

        std::cout << "Metodo temporal: a = " << x << ", b = " << y << std::endl;
    }

    // Metodo 2: Operaciones aritmeticas
    {
        int x = a;
        int y = b;

        x = x + y;
        y = x - y;
        x = x - y;

        std::cout << "Metodo aritmetico: a = " << x << ", b = " << y << std::endl;
    }

    // Metodo 3: XOR
    {
        int x = a;
        int y = b;

        x = x ^ y;
        y = x ^ y;
        x = x ^ y;

        std::cout << "Metodo XOR: a = " << x << ", b = " << y << std::endl;
    }

    return 0;
}
