#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <iomanip>
#include <limits>
#include "recibirDinero.h"
#include "operaciones.h"
using namespace std;

//llamada de las funciones donde se realizan las operaciones bancarias
void operacionesMenu(int opcion, double& saldo, double& deuda) {
    switch (opcion){
        case 1:
            system("cls");
            cout << "\033[34m=====================================\033[0m" << endl;
            cout << "\033[34m      ESTADO BANCARIO ACTUAL         \033[0m" << endl;
            cout << "\033[34m=====================================\033[0m" << endl;
            cout << "\033[36mSaldo actual: $\033[0m" << fixed << setprecision(2) << saldo << endl;
            if(deuda > 0){
                cout << "\033[36mDeuda actual: $\033[0m" << fixed << setprecision(2) << deuda << endl;
            }
            else{
                cout << "\033[31mNo tiene deudas"<< endl;
            }
            cout << "\033[34m=====================================\033[0m" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
            cin.get(); 
            break;
        case 2:
            transferenciaDinero(saldo);
            break;
        case 3:
            ingresarDinero(saldo);
            break;
        case 4:
            recibirDinero(saldo);
            break;
        case 5:
            prestamos(saldo);
            break;
    }
}
