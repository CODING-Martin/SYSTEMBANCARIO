#include <iostream>
#include "interfaz.h"
#include <string>
#include <windows.h>
#include "USERS\gestionUsuarios.h"
using namespace std;

void interfaz(string username)
{
    SetConsoleOutputCP(CP_UTF8);
    int opcion;
    bool comprobador = false;
    do {
        cout << "====================================="<< endl;
        cout << "  BANCO DE LA UNIVERSIDAD ACONCAGUA"<< endl;
        cout << "               HOLA! "<<username<<"             "<< endl;
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

    
        switch (opcion){
            case 1:
                void consultarEstadoBancario();
                break;
            case 2:
                void transferirDinero();
                break;
            case 3:
                void ingresarDinero();
                break;
            case 4:
                void recibirDinero();
                break;
            case 5:
                void prestamos();
                break;
            case 6:
                void cerrarSesion();
                break;
            default:
                bool mensajeDeError();
                break;
            }
    }while(!comprobador);
}
