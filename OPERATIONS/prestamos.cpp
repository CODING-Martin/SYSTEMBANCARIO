#include <iostream>
#include <limits>
#include "operaciones.h"
#include "interfaz.h"

using namespace std;

void prestamos(double& saldo) {
    double importePrestamos;
    double prestamoMaximo, deuda;
    int cuotas;
    if (saldo > 1000000) {
        do {
            cout << "Ingrese la cantidad de cuotas que desea pagar: ";
            cin >> cuotas;
            if (cuotas <= 0) {
            cout << "El número de cuotas debe ser mayor a 0. Intente nuevamente." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (cuotas <= 0);
        calcularPrestamos(saldo, prestamoMaximo, cuotas);
        do {
            cout << "En base a su sueldo le podemos prestar un importe maximo de $" << prestamoMaximo << "." << endl;
            cout << "Ingrese el importe a prestar: $";
            cin >> importePrestamos;
            if (importePrestamos > prestamoMaximo) {
                cout << "El importe no puede ser mayor que el maximo permitido. Intente nuevamente." << endl;
                cout << "Presione ENTER para continuar...";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (importePrestamos > prestamoMaximo);
            saldo += importePrestamos;
            deuda = importePrestamos;
            cout << "Su prestamo fue exitoso. Su saldo ahora es de $" << saldo << "." << endl;
            cout << "El importe de cada cuota es de $" << (importePrestamos / cuotas) << "." << endl;
            cout << "Presione ENTER para continuar...";

            cin.get();
    }
    else {
        cout << "El saldo no puede ser mayor a $1,000,000. Intente nuevamente." << endl;
        cout << "Presione ENTER para continuar...";
        cin.get();
    }
}