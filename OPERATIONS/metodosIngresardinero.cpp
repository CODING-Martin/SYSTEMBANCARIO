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
                cout << "\033[34m====================================\033[0m" << endl;
                cout << "\033[34m          INGRESO DE DINERO \033[0m" << endl;
                cout << "\033[34m====================================\033[0m" << endl;
                cout << endl;
                cout << "\033[35mIngrese el importe: $\033[0m";
                cin >> dinero;
                if (cin.fail()) {
                    cin.clear(); // Limpiar el estado de error
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
                }
                if (dinero <= 0) {
                    system("cls");
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "\033[31m❌ El importe debe ser mayor a 0. Intente nuevamente.\033[0m" << endl;
                    cout << "\033[36mPresione ENTER para continuar...\033[0m"<<endl;
                    cout << "\033[34m====================================\033[0m" << endl;
                    cin.get();
                }
            } while (dinero <= 0);
            animacion(opcion);
            saldo += dinero;
            system("cls");
            cout << "\033[32m✅ Su ingreso fue exitoso.\033[0m"<<endl; 
            cout << "\033[32mSu saldo ahora es de $\033[0m" << fixed << setprecision(2) << saldo << "." << endl;
            cout << "\033[36mPresione ENTER para continuar...\033[0m"<<endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 2:
            do {
                system("cls");
                cout << "\033[34m====================================\033[0m" << endl;
                cout << "\033[34m          INGRESO DE DINERO\033[0m" << endl;
                cout << "\033[34m====================================\033[0m" << endl;
                cout << endl;
                cout << "\033[35mIngrese el importe a depositar: $\033[0m";
                cin >> dinero;
                cout << "\033[34m====================================\033[0m" << endl;
                if (dinero <= 0) {
                    system("cls");
                    cout << "\033[34m====================================\033[0m" << endl;
                    cout << "\033[34m          INGRESO DE DINERO \033[0m" << endl;
                    cout << "\033[34m====================================\033[0m" << endl;
                    cout << "\033[31m❌ El importe debe ser mayor a 0. Intente nuevamente.\033[0m" << endl;
                    cout << "\033[36mPresione ENTER para continuar...\033[0m"<<endl;
                    cout << "\033[34m====================================\033[0m" << endl;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin.get();
                }
            } while (dinero <= 0);
            animacion(opcion);
            saldo += dinero;
            system("cls");
            cout << "\033[34m====================================\033[0m" << endl;
            cout << "\033[34m          INGRESO DE DINERO \033[0m" << endl;
            cout << "\033[34m====================================\033[0m" << endl;
            cout << "\033[32m✅ Su ingreso fue exitoso.\033[0m"<<endl; 
            cout << "\033[32mSu saldo ahora es de $\033[0m" << fixed << setprecision(2) << saldo << "." << endl;
            cout << endl;
            cout << "\033[36mPresione ENTER para continuar...\033[0m"<<endl;
            cout << "\033[34m====================================\033[0m" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
    }
}