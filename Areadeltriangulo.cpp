#include <iostream>

using namespace std;

// Función que calcula el área de un triángulo
double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

int main() {
    double base, altura;

    cout << "Ingresa la base del triángulo: ";
    cin >> base;

    cout << "Ingresa la altura del triángulo: ";
    cin >> altura;

    double area = areaTriangulo(base, altura);

    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
