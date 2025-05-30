#ifndef interfaz_h
#define interfaz_h
#include <string>
using namespace std;
//codigo sub main
void interfaz(string username);
//codigos complementarios
void opcionesMenu(int opcion);
bool comprobadorDeOpciones(int opcion, int limite);
void mensajeDeError(int opcion, int limite);

#endif
