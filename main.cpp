#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
#include "LOGIN/login.h"
#include "INTERFACE/interfaz.h"
#include "USERS/gestionUsuarios.h"
#include "CONFIG/config.h"
#include <string>
#include <algorithm>

void interfaz();
void RegistroLogin();
UserManager userManager;

int main()
{
    while (true) {
        RegistroLogin();
        cout << "Desea intentar de nuevo? (s/n): ";
        char opc1;
        cin >> opc1;
        if (tolower(opc1) == 'n' || tolower(opc1) == 'N') break;
        for (int i = 2; i > 0; --i) {
            cout << "\033[32m" << "\rReiniciando en " << i << " segundos..." << "\033[0m" << flush;
            this_thread::sleep_for(chrono::seconds(1));
        }
        cout << endl << endl;
    }

    cout << "\n\033[32m" << "Gracias por usar el sistema. Vuelva Pronto!" << "\033[0m" << endl;
    system("pause"); // Esto mantiene la terminal abierta hasta que el usuario presione una tecla
    return 0;
}