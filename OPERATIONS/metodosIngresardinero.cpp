#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <limits>
#include <iomanip>
using namespace std;

void metodosIngresoDinero(double& saldo, int opcion) {
    double dinero;
    switch (opcion) {
        case 1:
            do {
                system("cls");
                cout << "====================================" << endl;
                cout << "          INGRESO DE DINERO" << endl;
                cout << "====================================" << endl;
                cout << endl;
                cout << "Ingrese el importe a ingresar: $";
                cin >> dinero;
                if (dinero <= 0) {
                    system("cls");
                    cout << "====================================" << endl;
                    cout << "          INGRESO DE DINERO" << endl;
                    cout << "====================================" << endl;
                    cout << "El importe debe ser mayor a 0. Intente nuevamente." << endl;
                    cout << "Presione ENTER para continuar...";
                    cout << "====================================" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin.get();
                }
            } while (dinero <= 0);
            animacion(opcion);
            saldo += dinero;
            system("cls");
            cout << "====================================" << endl;
            cout << "          INGRESO DE DINERO" << endl;
            cout << "====================================" << endl;
            cout << endl;
            cout << "Su ingreso fue exitoso."<<endl; 
            cout << "Su saldo ahora es de $" << fixed << setprecision(2) << saldo << "." << endl;
            cout << "Presione ENTER para continuar..."<<endl;
            cout << "====================================" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 2:
            do {
                system("cls");
                cout << "====================================" << endl;
                cout << "          INGRESO DE DINERO" << endl;
                cout << "====================================" << endl;
                cout << endl;
                cout << "Ingrese el importe a depositar: $";
                cin >> dinero;
                cout << "====================================" << endl;
                if (dinero <= 0) {
                    system("cls");
                    cout << "====================================" << endl;
                    cout << "          INGRESO DE DINERO" << endl;
                    cout << "====================================" << endl;
                    cout << "El importe debe ser mayor a 0. Intente nuevamente." << endl;
                    cout << "Presione ENTER para continuar..."<<endl;
                    cout << "====================================" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin.get();
                }
            } while (dinero <= 0);
            animacion(opcion);
            saldo += dinero;
            system("cls");
            cout << "====================================" << endl;
            cout << "          INGRESO DE DINERO" << endl;
            cout << "====================================" << endl;
            cout << "Su ingreso fue exitoso."<<endl; 
            cout << "Su saldo ahora es de $" << fixed << setprecision(2) << saldo << "." << endl;
            cout << endl;
            cout << "Presione ENTER para continuar..."<<endl;
            cout << "====================================" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
    }
}