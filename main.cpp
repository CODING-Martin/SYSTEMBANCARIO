#include <iostream>
using namespace std;
#include "LOGIN/login.h"
#include "OPERATIONS/operaciones.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"
#include <string>

void mostrarLogin();
void mostrarOperaciones();
void mostrarInterface();
void mostrarGestionUsuarios();
void login();
void interfaz();


int main()
{
    cout << "Bienvenido al sistema bancario." << endl;
    mostrarLogin();
    login();
    interfaz();
    return 0;
}
