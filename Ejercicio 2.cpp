//Alejandro Freire 
// EJERCICIO 2 : Ingresar 4 calificaciones y mostrarlas
#include <iostream>
using namespace std;
//funcion para mostrar el arreglo 
void mostrarArreglo(float calificaciones[], int tamaño) {
    cout << "	NOTAS " << endl;
    for (int i = 0; i < tamaño; i++) {
        cout << calificaciones[i] << "    ";
    }
    cout << endl;
}

int main() {
    int tamaño = 4; 
    float calificaciones[tamaño];    
    cout << "Ingrese las calificaciones: " << endl;//Ingreso de la 4 calificaciones
    for (int i = 0; i < tamaño; i++) {
        cout<<"Calificacion N"<< i + 1 << ".-  ";
        cin >> calificaciones[i];
    }

    mostrarArreglo(calificaciones, tamaño);

    return 0;
}
