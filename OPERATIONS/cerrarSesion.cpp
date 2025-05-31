#include <iostream>
#include <unistd.h> 
#include <windows.h> 
#include "operaciones.h"
using namespace std;

// Funcion para cerrar sesion en el sistema bancario 
bool cerrarSesion() {
    int i;
    char opcion;

    do {
        system("cls");
        cout << "\033[33mEsta seguro que desea cerrar sesion? (s=si n=no) (s/n):\033[0m ";
        cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            cout << "\033[31mCerrando sesion\033[0m";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
            cout << endl;
            return true;
        } else if (opcion == 'n' || opcion == 'N') {
            cout << "\033[32mVolviendo al menu de inicio\033[0m";
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