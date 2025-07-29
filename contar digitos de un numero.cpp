#include <iostream>
#include <cmath>  // Para usar abs()

using namespace std;

// Función que cuenta cuántos dígitos tiene un número entero
int contarDigitos(int numero) {
    numero = abs(numero);  // Convertir a positivo para contar bien

    if (numero == 0) return 1;

    int contador = 0;

    while (numero > 0) {
        numero /= 10;
        contador++;
    }

    return contador;
}

int main() {
    int num;

    cout << "Ingresa un número entero: ";
    cin >> num;

    cout << "El número tiene " << contarDigitos(num) << " dígito(s)." << endl;

    return 0;
}
