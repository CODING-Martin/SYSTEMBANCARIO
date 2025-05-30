#ifndef operaciones_h
#define operaciones_h
#include "interfaz.h"
using namespace std;

void operacionesMenu(int opcion, double saldo);
void prestamos(double saldo);
bool cerrarSesion();


//subfunciones
void calcularPrestamos(double saldo, double prestamoMaximo,int coutas);

#endif