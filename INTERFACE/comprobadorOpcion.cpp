#include <iostream>
#include "interfaz.h"
using namespace std;

bool comprobadorDeOpciones(int opcion, int linite){ 
    if(opcion >=1 && opcion <=linite){
        return true;
    }
    else{
        return false;
    }
}