#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
using namespace std;

void ingresarDinero(double& saldo) {
    double dinero;
    bool comprobador = false;
    do{
        system("cls");
        cout << "Ingrese el importe a ingresar: $";
        cin >> dinero;
        if(dinero > 0){
            cout << "Ingreso exitoso. Saldo actual: $" << saldo << endl;
            saldo += dinero;
            comprobador = true;
        }
        else
            cout << "Importe invalida. Debe ser mayor que cero.\n";
    }while(!comprobador);
}