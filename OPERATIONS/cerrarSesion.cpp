#include <iostream>
#include "interfaz.h"
#include <unistd.h>
using namespace std;

bool cerrarSesion(){
    int i, opcion;
    bool comprobador = false;
    do
    {
        cout<<"¿Esta seguro que desea cerrar sesion? (s/n): ";
        cin >> opcion;
            if(opcion == 1){
                cout << "Cerrando sesion";
                    for(i = 3; i > 0; --i){
                        sleep(1000);
                        cout <<".";
                    }
                    comprobador = true;
                    return true;
            }
            else if (opcion == 0){
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
                mensajeDeError(opcion, 2);
                comprobador = false;
            }
    }while (comprobador == false);   
}