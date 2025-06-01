#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "interfaz.h"
//llamadas de las funciones donde se realizan las operaciones bancarias, sin ellas no se puede realizar ninguna operacion
void operacionesMenu(int opcion, double& saldo, double& deuda);
void prestamos(double& saldo);
void ingresarDinero(double& saldo);
void recibirDinero(double& saldo);
void transferenciaDinero(double& saldo);

void metodosIngresoDinero(double& saldo, int opcion);
void calcularPrestamos(double saldo, double& prestamoMaximo, int cuotas);
void animacion(int opcion);

#endif 