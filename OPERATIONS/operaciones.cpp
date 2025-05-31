#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <iomanip>
#include <limits>
#include "recibirDinero.h"
using namespace std;


void operacionesMenu(int opcion, double& saldo){
    switch (opcion){
        case 1:
            system("cls");
            cout << "\033[34m=====================================\033[0m" << endl;
            cout << "\033[32m      ESTADO BANCARIO ACTUAL         \033[0m" << endl;
            cout << "\033[34m=====================================\033[0m" << endl;
            cout << "\033[36mSaldo actual: $\033[0m" << fixed << setprecision(2) << saldo << endl;
            cout << "\033[34m=====================================\033[0m" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer antes de pedir ENTER
            cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
            cin.get(); 
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
