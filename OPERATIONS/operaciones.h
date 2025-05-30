#ifndef operaciones_h
#define operaciones_h
#include "interfaz.h"
using namespace std;

void operacionesMenu(int opcion, double saldo);
void consultarEstadoBancario();
void transferirDinero();
void ingresarDinero();
void recibirDinero();
void prestamos(double saldo);
void cerrarSesion();

//subfunciones
void calcularPrestamos(double saldo, double prestamoMaximo,int coutas);

#endif