#include <iostream>

using namespace std;

// Función que devuelve el mayor de dos números
int mayor(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    int resultado = mayor(num1, num2);

    cout << "El número mayor es: " << resultado << endl;

    return 0;
}
