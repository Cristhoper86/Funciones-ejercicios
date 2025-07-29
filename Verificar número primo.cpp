#include <iostream>

using namespace std;

// Función que determina si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    cout << "Ingresa un número entero: ";
    cin >> num;

    if (esPrimo(num)) {
        cout << "El número " << num << " es primo." << endl;
    } else {
        cout << "El número " << num << " no es primo." << endl;
    }

    return 0;
}
