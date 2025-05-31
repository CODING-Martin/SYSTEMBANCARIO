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

    if (saldo >= 1000000) {
        do {
            system("cls");
            cout << "\033[35mIngrese la cantidad de cuotas que desea pagar: \033[0m";
            cin >> cuotas;
            if (cin.fail() || cuotas <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\033[31m❌ El número de cuotas debe ser mayor a 0 y numérico. Intente nuevamente.\033[0m" << endl;
                system("pause");
            }
        } while (cuotas <= 0 || cin.fail());

        calcularPrestamos(saldo, prestamoMaximo, cuotas);

        do {
            system("cls");
            cout << "\033[35mEn base a su sueldo le podemos prestar un importe maximo de $\033[0m"
                << fixed << setprecision(2) << prestamoMaximo << "." << endl;
            cout << "\033[35mIngrese el importe a prestar: $\033[0m";
            cin >> importePrestamos;
            if (cin.fail() || importePrestamos > prestamoMaximo || importePrestamos <= 0) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                system("cls");
                cout << "\033[31m❌ El importe debe ser numérico, mayor a 0 y no mayor que el máximo permitido. Intente nuevamente.\033[0m" << endl;
                cout << "\033[36mPresione ENTER para continuar...\033[0m";
                cin.get();
            }
        } while (importePrestamos > prestamoMaximo || importePrestamos <= 0 || cin.fail());

        saldo += importePrestamos;
        deuda = importePrestamos;
        system("cls");
        cout << "\033[32m✅ Su prestamo fue exitoso. Su saldo ahora es de $\033[0m"
            << fixed << setprecision(2) << saldo << "." << endl;
        cout << "\033[35mEl importe de cada cuota es de $\033[0m"
            << fixed << setprecision(2) << (importePrestamos / cuotas) << "." << endl;
        cout << "\033[36mPresione ENTER para continuar...\033[0m";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    } else {
        system("cls");
        cout << "\033[31m❌ Debe ingresar dinero o el saldo de su cuenta debe ser mayor o igual a $1,000,000. Intente nuevamente.\033[0m" << endl;
        cout << "\033[36mPresione ENTER para continuar...\033[0m";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
}