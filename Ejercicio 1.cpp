//Alejandro Freire 
// EJERCICIO 1 : Ingresar 5 nunmeros y leerlos en un arreglo
#include <iostream>
using namespace std;

// función que muestra los valores
void mostrarArreglo(int numeros[], int tamaño) {
    cout << "Los valores almacenados en el arreglo son: " << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

int main() {
    const int tamaño = 5; 
    int numeros[tamaño];   

    // Ingreso de los números
    cout << "Ingrese cinco numeros enteros:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    //función que muestra los valores
    mostrarArreglo(numeros, tamaño);
    return 0;
}
