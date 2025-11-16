//Alejandro Freire 
// EJERCICIO 8 : Ingresar notas y que devuelva el promedio con dos decimales
#include <iostream>
using namespace std;
//Funcion para sacar el promedio de las notas
float promedio(float arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];}
    return suma / n;}

int main() {
    int n;
    //Se define el tamaño del arreglo 
	cout << "Ingrese cantidad de notas: ";
    cin >> n;
    float arr[n];
    
	//Se ingresa las notas 
	cout << "Ingrese los numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
    float prom = promedio(arr, n);
    int entero = (int)prom;
    float decimal = prom - entero;
    //Se ponen los dos decimales 
	int dosDecimales = (int)(decimal * 100);
    cout << "El promedio es: " << entero << ".";
    if (dosDecimales < 10) cout << "0";
    cout << dosDecimales << endl;
    return 0;
}
