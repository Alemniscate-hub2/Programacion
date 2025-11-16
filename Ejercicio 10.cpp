//Alejandro Freire 
// EJERCICIO 10 : Simular un sistema de el metro, debe permitir recargar saldo, pagar pasajes y mostrar el saldo disponible después de cada pasada.
#include <iostream>
using namespace std;

// Recarga de saldo
void recargar(double &saldo, double monto) {
    saldo += monto;
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl;
}

// Pagar pasaje
bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {
        saldo -= tarifa;
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
        return true;
    } else {
        cout << "Saldo insuficiente." << endl;
        return false;
    }
}

// Mostrar estado de la tarjeta
void mostrarEstado(double saldo, int pasadas) {
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << saldo << endl;
}

int main() {
    double saldo = 0;
    double monto, tarifa = 0.45;
    int pasadas = 0;
    char opcion;

    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Saldo actual: $" << saldo << endl;

    cout << "Ingrese monto a recargar: ";
    cin >> monto;
    recargar(saldo, monto);

    do {
        cout << "Pagando pasaje de $" << tarifa << " ..." << endl;

        if (pagar(saldo, tarifa)) pasadas++;

        cout << "Desea pagar otro pasaje? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    mostrarEstado(saldo, pasadas);

    cout << "===================================" << endl;

    return 0;
}
