#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "interfaz.h"

void operacionesMenu(int opcion, double& saldo);
void prestamos(double& saldo);
void ingresarDinero(double& saldo);

void metodosIngresoDinero(double& saldo, int opcion);
void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas);
void animacion(int opcion);

#endif 