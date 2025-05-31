#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
#include <limits>
#include <unistd.h> 
#include <windows.h> 
#include <iomanip>
using namespace std;
//estilos a la terminal power shell
void animacion(int opcion) {
    int i,j;
    switch (opcion) {
        case 1:
        system("cls");
        cout << "\033[32mProcensando transferencia\033[0m";
        for (i = 3; i > 0; --i) {
            Sleep(1000); 
            cout << ".";
        }
        system("cls");
        cout << "\033[32mAcreditando dinero\033[0m";
        for (i = 3; i > 0; --i) {
            Sleep(1000); 
            cout << ".";
        }
        break;
        case 2:
        system("cls");
        
        for (j = 0; j < 3 ; ++j) {
            cout << "\033[33mValidando ingreso del dinero,espere un momento\033[0m";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
            system("cls");
        }
            system("cls");
            cout << "\033[32mAcreditando dinero\033[0m";
            for (i = 3; i > 0; --i) {
                Sleep(1000); 
                cout << ".";
            }
        break;
    }
    
}