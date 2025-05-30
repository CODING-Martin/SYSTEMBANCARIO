#include <windows.h>
#undef byte
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
#include "LOGIN/login.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"
#include <string>
#include <algorithm>

void interfaz();
int RegistroLogin();
UserManager userManager;

int main()
{
    interfaz();
    SetConsoleOutputCP(CP_UTF8);
    
    /*while (true) {
        int resultado = RegistroLogin();
        if (resultado == 1) {
            // Login exitoso, salimos del ciclo
            break;
        } else if (resultado == 0) {
            // Usuario falló login o quiere salir
            cout << "Desea intentar de nuevo? (s=si n=no) (s/n): ";
            char opc1;
            cin >> opc1;
            if (tolower(opc1) == 'n' || tolower(opc1) == 'N') break;
            for (int i = 2; i > 0; --i) {
                cout << "\033[32m" << "\rReiniciando en " << i << " segundos..." << "\033[0m" << flush;
                this_thread::sleep_for(chrono::seconds(2));
            }
            cout << endl << endl;
        }
    }
    cout << "\n\033[32m" << "Gracias por usar el sistema. Vuelva Pronto! 😃 " << "\033[0m" << endl;
    system("pause");
    return 0;
    */
}