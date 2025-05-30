#include <iostream>
#include "operaciones.h"

using namespace std;

void prestamos(double saldo) {
    double importePrestamos;
    double prestamoMaximo, deuda;
    int cuotas;
    bool comprobador = false;

    do {
        cout << "Ingrese la cantidad de cuotas que desea pagar: ";
        cin >> cuotas;

        if (cuotas > 0) {
            cout << "El importe de cada cuota es de $" << (saldo / cuotas) << "." << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore(); 
            cin.get();
            comprobador = true; 
        }
    } while (!comprobador);

    comprobador = false;

    do {
        cout << "En base a su sueldo le podemos prestar un importe máximo de $" << prestamoMaximo << "." << endl;
        cout << "Ingrese el importe a prestar: $";
        cin >> importePrestamos;

        if (importePrestamos <= prestamoMaximo) {
            comprobador = true; 
        } else {
            cout << "El importe no puede ser mayor que el máximo permitido." << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (!comprobador);

    deuda = importePrestamos;
    cout << "Su préstamo fue exitoso. Su saldo ahora es de $" << saldo + importePrestamos << "." << endl;
    cout << "Presione ENTER para continuar...";
    cin.ignore();
    cin.get();
}
    
