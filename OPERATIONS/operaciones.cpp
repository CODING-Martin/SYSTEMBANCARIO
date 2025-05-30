#include <iostream>
#include "operaciones.h"
#include "gestionUsuarios.h"
using namespace std;

void operacionesMenu(int opcion){
    switch (opcion){
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
            void prestamos(double saldo, double prestamoMaximo, int coutas);
            break;
        case 6:
            void cerrarSesion();
            break;
    }
}
