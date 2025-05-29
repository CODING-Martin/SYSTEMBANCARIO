#include <iostream>
using namespace std;
#include "LOGIN/login.h"
#include "OPERATIONS/operaciones.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"




void registroLogin(); 


int main()
{
    cout << "Bienvenido al sistema bancario." << endl;
    cout << "Seleccione idioma / Select language (es/en): ";
    cin >> idioma;
    registroLogin(); // Llamada a la función de registro de inicio de sesión

    return 0;
}