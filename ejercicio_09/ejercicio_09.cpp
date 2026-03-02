#include <iostream>

int main() {
    double peso, altura, imc;

    std::cout << "Ingrese peso en kg: ";
    std::cin >> peso;

    std::cout << "Ingrese altura en metros: ";
    std::cin >> altura;

    imc = peso / (altura * altura);

    std::cout << "IMC: " << imc << std::endl;

    if (imc < 18.5) {
        std::cout << "Bajo peso\n";
        std::cout << "Sugerencia: mejorar alimentacion y consultar nutricionista\n";
    }
    else if (imc < 25) {
        std::cout << "Normal\n";
        std::cout << "Sugerencia: mantener habitos saludables\n";
    }
    else if (imc < 30) {
        std::cout << "Sobrepeso\n";
        std::cout << "Sugerencia: aumentar actividad fisica\n";
    }
    else if (imc < 35) {
        std::cout << "Obesidad I\n";
        std::cout << "Sugerencia: plan nutricional y ejercicio supervisado\n";
    }
    else {
        std::cout << "Obesidad II\n";
        std::cout << "Sugerencia: consultar profesional de salud\n";
    }

    return 0;
}
