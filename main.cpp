#include <iostream>
using namespace std;
#include "LOGIN/login.h"
#include "OPERATIONS/operaciones.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"

void mostrarLogin();
void mostrarOperaciones();
void mostrarInterface();
void mostrarGestionUsuarios();


int main()
{
    cout << "Bienvenido al sistema bancario." << endl;
    mostrarLogin();
    return 0;
}