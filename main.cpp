#include <iostream>
using namespace std;
#include "LOGIN/login.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"
#include "CONFIG/config.h"
#include <string>
#include <algorithm> // Para transformar a minúsculas
void RegistroLogin(); 
void interfaz();

int main()
{
    cout << "\033[33m"<< "Seleccione su idioma / Select your language (es/en): "<< "\033[0m" << endl;
    cin >> idioma;
    transform(idioma.begin(), idioma.end(), idioma.begin(), ::tolower); // Convertir a minúsculas
    RegistroLogin(); // Llamada a la función de registro de inicio de sesión
    interfaz();
    return 0;
}
