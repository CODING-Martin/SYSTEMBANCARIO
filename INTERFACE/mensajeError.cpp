#include <windows.h>
#undef byte
#include <iostream>
#include "interfaz.h"
using namespace std;

void mensajeDeError(){
    cout<<"La opcion no existe. Revise los datos ingresados e Intente Nuevamente.\n";
    cout<<endl;
    cout<<endl;
    cout << "Pulse ENTER para continuar...";
    cin.ignore();
    cin.get();
}

