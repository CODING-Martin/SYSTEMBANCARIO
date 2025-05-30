#include <iostream>
#include "interfaz.h"
#include <unistd.h>
using namespace std;

void cerrarSesion(){
    char confirmar;
    int i; 
    cout<<"¿Esta seguro que desea cerrar sesion? (s/n): ";
    cin >> confirmar;
    if(confirmar == 's' || confirmar == 'S'){
        cout << "Cerrando sesion";
        for(i = 3; i > 0; --i){
            sleep(1000);
            cout <<".";
        }
    }
}