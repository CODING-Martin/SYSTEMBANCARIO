#include <iostream>
#include "interfaz.h"
#include <unistd.h>
using namespace std;

bool cerrarSesion(){
    int i;
    char opcion;
    bool comprobador = false;
    do
    {
        cout<<"¿Esta seguro que desea cerrar sesion? (s/n): ";
        cin >> opcion;
            if(opcion == 's' || opcion == 'S'){
                cout << "Cerrando sesion";
                    for(i = 3; i > 0; --i){
                        sleep(1000);
                        cout <<".";
                    }
                    comprobador = true;
                    return true;
            }
            else if (opcion == 'n' || opcion == 'N'){
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
                mensajeDeError();
                comprobador = false;
            }
    }while (comprobador == false);   
}