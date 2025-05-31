#include <iostream>
#include <unistd.h> 
#include <windows.h> 
#include "operaciones.h"


using namespace std;

bool cerrarSesion() {
    int i;
    char opcion;

    do {
        system("cls");
        cout << "Esta seguro que desea cerrar sesion? (s/n): ";
        cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            cout << "Cerrando sesion";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
            cout << endl;
            return true;
        } else if (opcion == 'n' || opcion == 'N') {
            cout << "Volviendo al menu de inicio";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
            return false;
            cout << endl;
        } else {
            mensajeDeError(); 
        }
    } while (true);
}