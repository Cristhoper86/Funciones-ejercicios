#include <iostream>

using namespace std;

// Función que calcula el factorial de un número entero positivo
unsigned long long factorial(int numero) {
    if (numero < 0) return 0; // Opcional: manejar números negativos

    unsigned long long resultado = 1;

    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int num;

    cout << "Ingresa un número entero positivo: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }

    return 0;
}
