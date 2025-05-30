#include <iostream>
#include "interfaz.h"
#include <unistd.h>
using namespace std;

bool cerrarSesion(){
    char confirmar;
    int i; 
    bool comprobador = false;
    do
    {
        cout<<"¿Esta seguro que desea cerrar sesion? (s/n): ";
        cin >> confirmar;
            if(confirmar == 's' || confirmar == 'S'){
                cout << "Cerrando sesion";
                    for(i = 3; i > 0; --i){
                        sleep(1000);
                        cout <<".";
                    }
                    comprobador = true;
                    return true;
            }
            else if (confirmar == 'n' || confirmar == 'N'){
                cout << "Volviendo al menu de inicio";
                cout << "Cerrando sesion";
                    for(i = 3; i > 0; --i){
                        sleep(1000);
                        cout <<".";
                    }
                    return false;
                    comprobador = true;
            } 
            else{
                mensajeDeError(confirmar, 2);
                comprobador = false;
            }
    }while (comprobador == false);   
}