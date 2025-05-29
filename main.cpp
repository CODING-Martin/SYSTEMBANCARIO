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
string msg(const string& es, const string& en);
void interfaz();
void RegistroLogin();
UserManager userManager;

int main()
{
    cout << "\033[33m"<< "Seleccione su idioma / Select your language (es/en): "<< "\033[0m" << endl;
    cin >> idioma;
    transform(idioma.begin(), idioma.end(), idioma.begin(), ::tolower);
    while (true) {
        RegistroLogin();
        cout << msg("Desea intentar de nuevo? (s/n): ", "Try again? (y/n): ");
        char opc1;
        cin >> opc1;
        if (tolower(opc1) == 'n' || tolower(opc1) == 'N') break;
        for (int i = 2; i > 0; --i) {
            string es = "\033[32m""\rReiniciando en " + to_string(i) + " segundos..." "\033[0m";
            string en = "\033[32m""\rRestarting in " + to_string(i) + " seconds..." "\033[0m";
            cout  << msg(es, en) << flush;
            this_thread::sleep_for(chrono::seconds(2));
        }
        cout << endl;
        cout << endl;
    } // <-- CIERRA EL WHILE

    cout << "\n\033[32m" << msg("Gracias por usar el sistema.Hasta luego!", "Thank you for using the system. Goodbye!") << "\033[0m" << endl;
    system("pause"); //Esto mantiene la terminal abierta hasta que el usuario presione una tecla
    return 0;
}