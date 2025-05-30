#include <iostream>
#include "operaciones.h"

using namespace std;

void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas) {
    if (saldo > 1000000) {
        prestamoMaximo = (saldo * 25) / 100;
        cout << "El préstamo máximo permitido es de $" << prestamoMaximo << endl;
    } else {
        cout << "Debe tener más de $1,000,000 en saldo para solicitar un préstamo." << endl;
    }

    cout << "Presione ENTER para continuar...";
    cin.ignore();
    cin.get();
}