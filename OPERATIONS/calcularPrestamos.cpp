#include <iostream>
#include "operaciones.h"

using namespace std;

void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas){
    prestamoMaximo = (saldo * 25) / 100;
    cout << "El prestamo maximo permitido es de $" << prestamoMaximo << endl;
    cout << "Presione ENTER para continuar...";
    cin.get();
}