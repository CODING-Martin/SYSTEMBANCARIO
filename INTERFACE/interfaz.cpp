#include <windows.h>
#undef byte
#include <iostream>
#include "interfaz.h"
#include <string>
#include "operaciones.h"
using namespace std;

void interfaz()
{
    int opcion, limite = 6;
    bool comprobador = false;
    do {
        cout << "====================================="<< endl;
        cout << "  BANCO DE LA UNIVERSIDAD ACONCAGUA"<< endl;
        cout << "                HOLA!                 "<< endl;
        cout << "====================================="<< endl;
        cout <<"\n 1) Consultar estado bancario"<< endl;
        cout <<"\n 2) Transferir dinero"<< endl;
        cout <<"\n 3) Ingresar dinero"<< endl;
        cout <<"\n 4) Recibir dinero"<< endl;
        cout <<"\n 5) Prestamos"<< endl;
        cout <<"\n 6) Cerrar sesion"<< endl;
        cout << "====================================="<< endl;
        cout << "Opcion: ";
        cin >> opcion;
        comprobador = comprobadorDeOpciones(opcion, limite);
    }while(!comprobador);
    operacionesMenu(opcion);
}
