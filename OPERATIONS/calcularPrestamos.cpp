#include <iostream>
#include "operaciones.h"

using namespace std;

void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas){
    prestamoMaximo = (saldo * 25) / 100;
}