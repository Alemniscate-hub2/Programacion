//Alejandro Freire 
// EJERCICIO 7 : Ingresar numeros y ordenarlos de menor a mayor 
#include <iostream>
using namespace std;

// Función para mostrar arreglo
void mostrarArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Burbuja para ordenar los elementos 
void burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;

    int arr[n];

    cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Arreglo original: ";
    mostrarArreglo(arr, n);

    burbuja(arr, n);

    cout << "Arreglo ordenado: ";
    mostrarArreglo(arr, n);

    return 0;
}
