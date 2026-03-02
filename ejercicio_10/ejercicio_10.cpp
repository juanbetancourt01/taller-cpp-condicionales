#include <iostream>
#include <algorithm>

int main() {
    double monto;
    char tipoCliente;
    char cupon;
    bool finDeSemana;
    double descuento = 0;

    std::cout << "Ingrese monto de compra: ";
    std::cin >> monto;

    std::cout << "Tipo de cliente (V = VIP, N = Normal): ";
    std::cin >> tipoCliente;

    std::cout << "Codigo de cupon (A, B, C): ";
    std::cin >> cupon;

    std::cout << "Es fin de semana? (1 = Si, 0 = No): ";
    std::cin >> finDeSemana;

    // Descuento por tipo de cliente
    if (tipoCliente == 'V') {
        descuento += 0.20; // 20%
    } else if (tipoCliente == 'N') {
        descuento += 0.10; // 10%
    }

    // Descuento por monto
    if (monto > 500) {
        descuento += 0.10;
    }

    // Descuento por cupon
    switch (cupon) {
        case 'A':
            descuento += 0.05;
            break;
        case 'B':
            descuento += 0.10;
            break;
        case 'C':
            descuento += 0.15;
            break;
        default:
            std::cout << "Cupon no valido\n";
    }

    // Descuento fin de semana
    if (finDeSemana) {
        descuento += 0.05;
    }

    // Limitar descuento maximo al 50%
    descuento = std::min(descuento, 0.50);

    double precioFinal = monto - (monto * descuento);

    std::cout << "Descuento total aplicado: " << descuento * 100 << "%\n";
    std::cout << "Precio final: " << precioFinal << std::endl;

    return 0;
}
