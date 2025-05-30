#include <windows.h>
#undef byte
#include <iostream>
#include "interfaz.h"
using namespace std;

bool comprobadorDeOpciones(int opcion, int limite){ 
    if(opcion >=1 && opcion <=limite){
        return true;
    }
    else{
        mensajeDeError();
        return false;
    }
}