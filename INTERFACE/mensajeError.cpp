#include <windows.h>
#include <iostream>
#include <limits> 
#include "interfaz.h"

using namespace std;

void mensajeDeError() {
    system("cls");
    cout << "\033[31mLa opción no existe. Revise los datos ingresados e intente nuevamente.\033[0m\n\n";
    cout << "Pulse ENTER para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}


