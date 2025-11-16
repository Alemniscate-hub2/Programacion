//Alejandro Freire 
// EJERCICIO 3 : Ingresar numeros y sumarlos todos
#include <iostream>
using namespace std;

// Función que calcula la suma total
void calcularSuma(int numeros[], int tamaño, int &suma) {
    suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += numeros[i];
    }
}

int main() {
    const int tamaño = 5;
    int numeros[tamaño];
    int sumaTotal;
//Pide los numeros a sumar 
    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Llamamos a la función para calcular la suma
    calcularSuma(numeros, tamaño, sumaTotal);

    cout << "La suma total de los elementos es: " << sumaTotal << endl;

    return 0;
}
