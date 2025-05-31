#include <windows.h>
#include <iostream>
#include <string>
#include "interfaz.h"
#include "operaciones.h"
#include <limits>

using namespace std;

void interfaz() {
    int opcion, limite = 6;
    double saldo = 0.0; 
    bool comprobador = false;
    do {
        do {
            system("cls");
            cout << "=====================================" << endl;
            cout << "  BANCO DE LA UNIVERSIDAD ACONCAGUA" << endl;
            cout << "                HOLA!" << endl;
            cout << "=====================================" << endl;
            cout << "\n 1) Consultar estado bancario" << endl;
            cout << "\n 2) Transferir dinero" << endl;
            cout << "\n 3) Ingresar dinero" << endl;
            cout << "\n 4) Recibir dinero" << endl;
            cout << "\n 5) Prestamos" << endl;
            cout << "\n 6) Cerrar sesion" << endl;
            cout << "=====================================" << endl;
            cout << "Opcion: ";
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
