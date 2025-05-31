#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <limits>
#include <unistd.h> 
#include <windows.h> 
#include <iomanip>
using namespace std;
void animacion(int opcion) {
    int i,j;
    switch (opcion) {
        case 1:
        system("cls");
        cout << "Procensando con transferencia";
        for (i = 3; i > 0; --i) {
            Sleep(1000); 
            cout << ".";
        }
        system("cls");
        cout << "Acreditando dinero";
        for (i = 3; i > 0; --i) {
            Sleep(1000); 
            cout << ".";
        }
        break;
        case 2:
        system("cls");
        cout << "Ingrese el dinero por la ranura";
        for (j = 0; j < 3 ; ++j) {
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
            system("cls");
        }
            system("cls");
            cout << "Acreditando dinero";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
        break;
    }
    
}