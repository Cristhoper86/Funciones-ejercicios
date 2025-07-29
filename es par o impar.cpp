#include <iostream>

using namespace std;

// Función que determina si un número es par o impar
bool esPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    int num;

    cout << "Ingresa un número: ";
    cin >> num;

    if (esPar(num)) {
        cout << "El número " << num << " es par." << endl;
    } else {
        cout << "El número " << num << " es impar." << endl;
    }

    return 0;
}
