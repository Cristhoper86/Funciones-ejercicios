#include <iostream>

using namespace std;

// Definición de la función suma
int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    int resultado = suma(num1, num2);

    cout << "La suma es: " << resultado << endl;

    return 0;
}
