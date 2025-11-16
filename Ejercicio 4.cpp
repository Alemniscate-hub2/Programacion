//Alejandro Freire 
// EJERCICIO 4 : Ingresar numeros y halla el mayor 
#include <iostream>
using namespace std;

// Función que encuentra el número mayor
void encontrarMayor(int numeros[], int tamaño, int &mayor) {
    mayor = numeros[0];
    for (int i = 1; i < tamaño; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
}

int main() {
    int tamaño;
    cout << "Ingrese la cantidad de numeros que desea almacenar: ";
    cin >> tamaño;
//Se pide el tamaño del arreglo a ordenas 
    int numeros[tamaño];
    int mayor;

    // Ingreso de los números
    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Llamamos a la función que encuentra el mayor
    encontrarMayor(numeros, tamaño, mayor);

    cout << "El numero mayor del arreglo es: " << mayor << endl;

    return 0;
}
