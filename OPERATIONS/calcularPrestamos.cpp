#include <iostream>
#include "operaciones.h"
using namespace std;
void calcularPrestamos(double saldo, double prestamoMaximo, int coutas){
    if (saldo > 1000000){
        prestamoMaximo = ((saldo * 25)/100) * coutas;
    }
    else{
        cout << "Debe haber mas de un $1000000 para poder prestar.";
        cout << endl;
        cout << "Presione ENTER para continuar...";
        cin.get();
    }
}