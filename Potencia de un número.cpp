#include <iostream>

using namespace std;

// Función que calcula base^exponente sin usar pow()
int potencia(int base, int exponente) {
    int resultado = 1;

    if (exponente < 0) {
        // Para este ejemplo simple, retornamos 0 si el exponente es negativo
        // porque el resultado sería fraccional (no entero)
        return 0;
    }

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;

    cout << "Ingresa la base: ";
    cin >> base;

    cout << "Ingresa el exponente (entero no negativo): ";
    cin >> exponente;

    int resultado = potencia(base, exponente);

    if (resultado == 0 && exponente < 0) {
        cout << "Exponente negativo no soportado en esta función." << endl;
    } else {
        cout << base << " elevado a " << exponente << " es: " << resultado << endl;
    }

    return 0;
}
