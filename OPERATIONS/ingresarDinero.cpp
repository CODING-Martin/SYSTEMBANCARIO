#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <limits>
#include <iomanip>
using namespace std;

void ingresarDinero(double& saldo) {
    double dinero;
    bool comprobador = false;
    int opcion;
    do{
        system("cls");
        cout << "====================================" << endl;
        cout << "          INGRESO DE DINERO" << endl;
        cout << "====================================" << endl;
        cout << endl;
        cout << "1) Transferencia bancaria"<< endl;
        cout << "2) Depósito bancario" << endl;
        cout << "====================================" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        comprobador = comprobadorDeOpciones(opcion, 2);
    }while(!comprobador);
        metodosIngresoDinero(saldo,opcion);
}