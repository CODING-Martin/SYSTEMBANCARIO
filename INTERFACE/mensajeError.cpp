#include <iostream>
#include "interfaz.h"
using namespace std;

void mensajeDeError(int opcion, int limite){
    cout<<"La opcion "<<opcion<<" no existe. Revise los datos ingresados e Intente Nuevamente.\n";
    cin.get();
}

