#include <iostream>

int main() {
    double saldo = 1000.0;
    int opcion;
    double monto;
    int transacciones = 0;

    std::cout << "1. Depositar\n";
    std::cout << "2. Retirar\n";
    std::cout << "3. Consultar saldo\n";
    std::cout << "Seleccione opcion: ";
    std::cin >> opcion;

    switch (opcion) {

        case 1:
            std::cout << "Ingrese monto a depositar: ";
            std::cin >> monto;
            saldo += monto;
            transacciones++;
            std::cout << "Nuevo saldo: " << saldo << std::endl;
            break;

        case 2:
            std::cout << "Ingrese monto a retirar: ";
            std::cin >> monto;

            if (monto <= saldo) {
                saldo -= monto;
                transacciones++;
                std::cout << "Nuevo saldo: " << saldo << std::endl;
            } else {
                std::cout << "Fondos insuficientes\n";
            }
            break;

        case 3:
            std::cout << "Saldo actual: " << saldo << std::endl;
            break;

        default:
            std::cout << "Opcion no valida\n";
    }

    std::cout << "Numero de transacciones: " << transacciones << std::endl;

    return 0;
}
