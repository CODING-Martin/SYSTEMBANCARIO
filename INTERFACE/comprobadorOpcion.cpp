#include <windows.h>
#undef byte
#include <iostream>
#include "interfaz.h"
using namespace std;

//funcion booleana que comprueba si la opcion ingresada es valida sino muestra un mensaje de error
bool comprobadorDeOpciones(int opcion, int limite) {
    if (opcion >= 1 && opcion <= limite) {
        return true;
    } else {
        mensajeDeError();
        return false;
    }
}