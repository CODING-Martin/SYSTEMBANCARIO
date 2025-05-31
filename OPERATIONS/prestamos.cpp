#include <iostream>
#include "operaciones.h"
#include "interfaz.h"

using namespace std;

void prestamos(double& saldo) {
    double importePrestamos;
    double prestamoMaximo, deuda;
    int cuotas;

    do {
        cout << "Ingrese la cantidad de cuotas que desea pagar: ";
        cin >> cuotas;
        if (cuotas <= 0) {
            cout << "El número de cuotas debe ser mayor a 0. Intente nuevamente." << endl;
        }
    } while (cuotas <= 0);

    cout << "El importe de cada cuota es de $" << (saldo / cuotas) << "." << endl;
    cout << "Presione ENTER para continuar...";
    cin.ignore();
    cin.get();

    calcularPrestamos(saldo, prestamoMaximo, cuotas);

    do {
        cout << "En base a su sueldo le podemos prestar un importe máximo de $" << prestamoMaximo << "." << endl;
        cout << "Ingrese el importe a prestar: $";
        cin >> importePrestamos;

        if (importePrestamos > prestamoMaximo) {
            cout << "El importe no puede ser mayor que el máximo permitido. Intente nuevamente." << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (importePrestamos > prestamoMaximo);

    saldo += importePrestamos;
    deuda = importePrestamos;
    cout << "Su préstamo fue exitoso. Su saldo ahora es de $" << saldo << "." << endl;
    cout << "Presione ENTER para continuar...";
    cin.ignore();
    cin.get();
}  
