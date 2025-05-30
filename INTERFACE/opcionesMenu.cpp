#include <iostream>
#include "interfaz.h"

void opcionesMenu(int opcion)
{
    bool comprobador = false;
    do {
        switch (opcion) {
        case 1:
            void consultarEstadoBancario();
            break;
        case 2:
            void transferirDinero();
            break;
        case 3:
            void ingresarDinero();
            break;
        case 4:
            void recibirDinero();
            break;
        case 5:
            void prestamos();
            break;
        case 6:
            void cerrarSesion();
            break;
        default:
            bool mensajeDeError();
            break;
        }
    }while(!comprobador);
}
