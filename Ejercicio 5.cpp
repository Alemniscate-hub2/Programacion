//Alejandro Freire 
// EJERCICIO 5 : Ingresar numeros y multiplpicarlos por otro pero sin modificar el arreglo ooriginal   
#include <iostream>
using namespace std;

// Función que multiplica cada elemento sin modificar el conjunto original

void multiplicarPorValor(int numeros[], int tamaño, int multiplicador) {
    cout << "Resultados de la multiplicacion:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << numeros[i] << " x " << multiplicador << " = " 
             << numeros[i] * multiplicador << endl;
    }
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

    int multiplicador;
    cout << "Ingrese el numero por el cual desea multiplicar: ";
    cin >> multiplicador;

    // Función que trabaja por valor
    multiplicarPorValor(numeros, tamaño, multiplicador);

    return 0;
}

