#include <iostream>
#include <iomanip>

int main() {
    double celsius;

    std::cout << "Ingrese temperatura en Celsius: ";
    std::cin >> celsius;

    double fahrenheit = (celsius * 9.0/5.0) + 32;
    double kelvin = celsius + 273.15;
    double rankine = (celsius + 273.15) * 9.0/5.0;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Kelvin: " << kelvin << std::endl;
    std::cout << "Rankine: " << rankine << std::endl;

    return 0;
}
