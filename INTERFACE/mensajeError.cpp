#include <windows.h>
#include <iostream>
#include <limits> 
#include "interfaz.h"

using namespace std;

void mensajeDeError() {
    system("cls");
    cout << "\033[31m  ❌  La opción no existe. Revise los datos ingresados e intente nuevamente.\033[0m\n\n";
    cout << "\033[36mPulse ENTER para continuar...\033[0m";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}


