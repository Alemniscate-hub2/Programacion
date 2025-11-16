//Alejandro Freire 
// EJERCICIO 9 : Ingresar productos y de acuerdo a la cantidad y el subtotal aplicar un descuento 
#include <iostream>
using namespace std;

// Se ingresan los productos 
void cargarDatos(string &producto, double &precio, int &cantidad) {
    cout << "Nombre del producto: ";
    cin >> producto;
    cout << "Precio unitario: ";
    cin >> precio;
    cout << "Cantidad: ";
    cin >> cantidad;
}

// Calcular subtotal
double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}

// Aplicar descuentos 
void aplicarDescuentos(double subtotal, int cantidad, double &total, double &descuentos) {
    descuentos = 0;

    if (cantidad == 2) descuentos += subtotal * 0.10;
    if (cantidad >= 3) descuentos += subtotal * 0.15;
    if (subtotal > 200) descuentos += subtotal * 0.05;

    total = subtotal - descuentos;
}

// Mostrar factura
void mostrarFactura(string producto, double subtotal, double descuentos, double total) {
    cout << "\n===== FACTURA =====" << endl;
    cout << "Producto: " << producto << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuentos aplicados: $" << descuentos << endl;
    cout << "Total a pagar: $" << total << endl;
    cout << "=====================" << endl;
}

int main() {
    string producto;
    double precio, subtotal, total, descuentos;
    int cantidad;
    cargarDatos(producto, precio, cantidad);
    subtotal = calcularSubtotal(precio, cantidad);
    aplicarDescuentos(subtotal, cantidad, total, descuentos);
    mostrarFactura(producto, subtotal, descuentos, total);
    return 0;
}
