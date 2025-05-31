#include <windows.h>
#include <iostream>
#include <string>
#include "interfaz.h"
#include "operaciones.h"
#include <limits>
using namespace std;

//funcion del menu principal del sistema bancario
void interfaz() {
    system("cls");
    cout << "\033[36mCargando el menú principal\033[0m";
    for (int i = 0; i < 3; ++i) {
        cout << ".";
        Sleep(700); // 700 ms entre puntos
        cout.flush();
    }
    int opcion, limite = 6;
    double saldo = 0.0; 
    bool comprobador = false;
    do {
        do {
            system("cls");
            cout << "\033[34m=====================================\033[0m" << endl;
            cout << "\033[34m  BIENVENIDO AL SISTEMA BANCARIO UDA \033[0m" << endl;
            cout << "\033[34m               \033[0m" << endl;
            cout << "\033[34m=====================================\033[0m" << endl;
            cout << "\033[36m\n Que desea hacer? \033[0m" << endl;
            cout << "\033[35m\n 1) Consultar estado bancario\033[0m" << endl;
            cout << "\033[35m\n 2) Transferir dinero\033[0m" << endl;
            cout << "\033[35m\n 3) Ingresar dinero\033[0m" << endl;
            cout << "\033[35m\n 4) Recibir dinero\033[0m" << endl;
            cout << "\033[35m\n 5) Prestamos\033[0m" << endl;
            cout << "\033[35m\n 6) Cerrar sesion\033[0m" << endl;
            cout << "\033[34m======================================\033[0m" << endl;
            cout << "\033[36mSeleccione una opcion: \033[0m";
            cin >> opcion;
            comprobador = comprobadorDeOpciones(opcion, limite);
            }while (!comprobador);
            operacionesMenu(opcion, saldo);
            comprobador = false;
            if (opcion == 6){
            comprobador = cerrarSesion();
            }
    } while (comprobador == false);
} 
