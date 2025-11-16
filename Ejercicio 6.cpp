//Alejandro Freire 
// EJERCICIO 6 : Ingresar numeros verificar cuantos son pares, sin modificar el arreglo original
#include <iostream>
using namespace std;
// Función que cuenta cuántos números son pares
int contarPares(int numeros[], int tamaño) {
    int cantidadPares = 0;

    for (int i = 0; i < tamaño; i++) {
        if (numeros[i] % 2 == 0) {
            cantidadPares++;
        }
    }

    return cantidadPares;
}

int main() {
    int tamaño;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> tamaño;

    int numeros[tamaño];

    // Ingreso del arreglo
    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Llamada a la función
    int totalPares = contarPares(numeros, tamaño);

    cout << "Cantidad de numeros pares: " << totalPares << endl;

    return 0;
}
