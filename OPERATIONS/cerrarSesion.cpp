#include <iostream>
#include <unistd.h> 
#include <windows.h> 
#include "operaciones.h"


using namespace std;

bool cerrarSesion() {
    int i;
    char opcion;

    do {
        cout << "¿Está seguro que desea cerrar sesión? (s/n): ";
        cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            cout << "Cerrando sesión";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
            cout << endl;
            return true;
        } else if (opcion == 'n' || opcion == 'N') {
            cout << "Volviendo al menú de inicio" << endl;
            for (i = 3; i > 0; --i) {
            Sleep(1000); 
            cout << ".";
            }
            return false;
        } else {
            mensajeDeError(); 
        }
    } while (true);
}