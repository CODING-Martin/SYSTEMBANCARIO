#include <iostream>
using namespace std;
#include "LOGIN/login.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"
#include "CONFIG/config.h"
#include <string>
void RegistroLogin(); 
void interfaz();

int main()
{
    cout << "Bienvenido al sistema bancario." << endl;
    cout << "Seleccione idioma / Select language (es/en): ";
    cin >> idioma;
    RegistroLogin(); // Llamada a la función de registro de inicio de sesión
    interfaz();
    return 0;
}
