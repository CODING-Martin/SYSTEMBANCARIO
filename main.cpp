//incluimos todas las funciones necesarias
#include <windows.h>
#undef byte
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
#include "LOGIN/login.h"
#include "INTERFACE/interfaz.h"
#include "OPERATIONS/operaciones.h"
#include "USERS/gestionUsuarios.h"
#include <string>
#include <algorithm>

//llamado de las funciones
void interfaz();
int RegistroLogin();
UserManager userManager; // esta sirve para manejar los usuarios

int main()
{
    double deuda = 0.0;
    SetConsoleOutputCP(CP_UTF8); // para permitir caracteres UTF-8 en la consola
    // Bucle de login
    while (true) {
        int resultado = RegistroLogin();
        if (resultado == 1) {
            // Login exitoso, salimos del ciclo
            break;
        } else if (resultado == 0) {
            // Usuario fallo login o quiere salir
            cout <<endl;
            cout << "\033[31mDesea intentar de nuevo? (s=si n=no) (s/n): \033[0m";
            char opc1;
            cin >> opc1;
            if (tolower(opc1) == 'n' || tolower(opc1) == 'N') {
                cout << "\n\033[32m" << "Gracias por usar el sistema bancario UDA. Vuelva Pronto! 😃 " << "\033[0m" << endl;
                system("pause");
                return 0;
            }
            for (int i = 2; i > 0; --i) {
                cout << "\033[32m" << "\rReiniciando en " << i << " segundos..." << "\033[0m" << flush;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << endl << endl;
        }
    }
    // Acceso al sistema bancario
    interfaz(deuda);
    // Mensaje de despedida
    cout << "\n\033[32m" << "Gracias por usar el sistema bancario UDA. Vuelva Pronto! 😃 " << "\033[0m" << endl;
    system("pause");
    return 0;
}