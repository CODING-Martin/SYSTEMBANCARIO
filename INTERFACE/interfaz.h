#ifndef INTERFAZ_H // sirve para evitar inclusiones múltiples
#define INTERFAZ_H
#include "operaciones.h"
// Funciones principales
void interfaz(double& deuda);
// Funciones complementarias
void opcionesMenu(int opcion);
bool comprobadorDeOpciones(int opcion, int limite);
void mensajeDeError();
bool cerrarSesion();

#endif // INTERFAZ_H
