#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <limits>
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
            cout << "Ingreso exitoso. Saldo actual: $" << saldo << endl;
            comprobador = true;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        }
        else
            cout << "Importe invalida. Debe ser mayor que cero.\n";
    }while(!comprobador);
}