#include <iostream>

using namespace std;

// Función que convierte Celsius a Fahrenheit
double celsiusAFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius;

    cout << "Ingresa la temperatura en grados Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusAFahrenheit(celsius);

    cout << celsius << " grados Celsius son " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}
