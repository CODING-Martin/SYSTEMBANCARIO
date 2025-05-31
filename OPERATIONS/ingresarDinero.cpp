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
        cout << "\033[34m====================================\033[0m" << endl;
        cout << "\033[34m           INGRESO DE DINERO \033[0m" << endl;
        cout << "\033[34m====================================\033[0m" << endl;
        cout << endl;
        cout << "\033[35m1) Transferencia bancaria\033[0m"<< endl;
        cout << "\033[35m2) Depósito bancario\033[0m" << endl;
        cout << "\033[34m====================================\033[0m" << endl;
        cout << "\033[36mSeleccione una opcion: \033[0m";
        cin >> opcion;
        comprobador = comprobadorDeOpciones(opcion, 2);
    }while(!comprobador);

        metodosIngresoDinero(saldo,opcion);
}
