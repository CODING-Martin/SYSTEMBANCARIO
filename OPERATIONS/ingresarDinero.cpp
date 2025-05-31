#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <limits>
#include <iomanip>
using namespace std;

void ingresarDinero(double& saldo) {
    double dinero;
    bool comprobador = false;
    do{
        system("cls");
        cout << "Ingrese el importe: $";
        cin >> dinero;
        if(dinero > 0){
            saldo += dinero;
            system("cls");
            cout << "Ingreso exitoso. Saldo actual: $" << fixed << setprecision(2) << saldo << endl;
            comprobador = true;
            cout << endl;
            cout << "Presione ENTER para continuar...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        }
        else
            cout << "Importe invalida. Debe ser mayor que cero.\n";
    }while(!comprobador);
}