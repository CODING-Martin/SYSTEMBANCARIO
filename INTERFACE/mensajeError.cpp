#include <iostream>
#include "interfaz.h"
using namespace std;

void mensajeDeError(int opcion, int limite){
    cout<<"La opcion "<<opcion<<" no existe. Revise los datos ingresados e Intente Nuevamente.\n";
    cout<<endl;
    cout<<endl;
    cout << "Pulse ENTER para continuar...";
    cin.get();
}

