#include <iostream>
#include "operaciones.h"
#include "interfaz.h"
using namespace std;

void operacionesMenu(int opcion, double& saldo){
    switch (opcion){
        case 5:
            prestamos(saldo);
            break;
    }
}
