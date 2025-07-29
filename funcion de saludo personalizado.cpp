#include <iostream>
#include <string>

using namespace std;

// Definición de la función saludar
void saludar(string nombre) {
    cout << "¡Hola, " << nombre << "! Bienvenido." << endl;
}

int main() {
    string nombreUsuario;

    cout << "Ingresa tu nombre: ";
    getline(cin, nombreUsuario);  // Permite ingresar nombres con espacios

    saludar(nombreUsuario);  // Llamada a la función

    return 0;
}
