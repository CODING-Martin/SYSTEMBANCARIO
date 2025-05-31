#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "interfaz.h"

void operacionesMenu(int opcion, double& saldo);
void prestamos(double& saldo);


void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas);

#endif 