#include <iostream>
#include <limits>
#include "operaciones.h"
#include "interfaz.h"
#include <iomanip>

using namespace std;

void prestamos(double& saldo) {
    double importePrestamos;
    double prestamoMaximo, deuda;
    int cuotas;
    if (saldo > 1000000) {
        do {
            system("cls");
            cout << "Ingrese la cantidad de cuotas que desea pagar: ";
            cin >> cuotas;
            if (cuotas <= 0) {
            cout << "El número de cuotas debe ser mayor a 0. Intente nuevamente." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (cuotas <= 0);
        calcularPrestamos(saldo, prestamoMaximo, cuotas);
        do {
            system("cls");
            cout << "En base a su sueldo le podemos prestar un importe maximo de $" <<fixed << setprecision(2) << prestamoMaximo << "." << endl;
            cout << "Ingrese el importe a prestar: $";
            cin >> importePrestamos;
            if (importePrestamos > prestamoMaximo) {
                system("cls");
                cout << "El importe no puede ser mayor que el maximo permitido. Intente nuevamente." << endl;
                cout << "Presione ENTER para continuar...";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
            }
        } while (importePrestamos > prestamoMaximo);
            saldo += importePrestamos;
            deuda = importePrestamos;
            system("cls");
            cout << "Su prestamo fue exitoso. Su saldo ahora es de $" << fixed << setprecision(2) << saldo << "." << endl;
            cout << "El importe de cada cuota es de $" << fixed << setprecision(2)<< (importePrestamos / cuotas) << "." << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
    }
    else {
        cout << "El saldo no puede ser mayor a $1,000,000. Intente nuevamente." << endl;
        cout << "Presione ENTER para continuar...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}