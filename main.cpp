#include <iostream>
using namespace std;
#include "LOGIN/login.h"
#include "OPERATIONS/operaciones.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"

#include "CONFIG/config.h"

void RegistroLogin(); 

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
    cout << "Seleccione idioma / Select language (es/en): ";
    cin >> idioma;
    RegistroLogin(); // Llamada a la función de registro de inicio de sesión
    mostrarLogin();
    login();
    interfaz();
    return 0;
}
