#include <iostream>
#include "operaciones.h"
using namespace std;
//funcion para calcular el prestamo maximo que se le puede otorgar al usuario
void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas){
    prestamoMaximo = ((saldo * 25) / 100) * cuotas;
}