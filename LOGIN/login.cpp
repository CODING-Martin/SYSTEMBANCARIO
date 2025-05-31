#define NOMINMAX
#include <windows.h>
#undef byte
#include <iostream>
#include <string>
#include <map>
#include <thread>
#include <chrono>
#include "gestionUsuarios.h"
using namespace std;
extern UserManager userManager;

// Función para registrar el inicio de sesión del usuario
int RegistroLogin() {
    cout << endl;
    cout << "\033[34m" << "+-----------------------------------+" << endl;
    cout << "|    ACCESO AL SISTEMA BANCARIO     |" << endl;
    cout << "+-----------------------------------+" << "\033[0m" << endl;
    int intentos = 3;
    string users, password;
    int opc;
    cout << endl;
while (true) {
    if (userManager.getUserCount() == 1) {
        cout << "\033[35m 1. Presione 1 para iniciar sesion (SOLO ADMINISTRADOR)\033[0m" << endl;
        cout << "\033[35m 2. Presione 2 para registrar un nuevo usuario\033[0m" << endl;
    } else {
        cout << "\033[35m 1. Presione 1 para iniciar sesion (USUARIO NUEVO)\033[0m" << endl;
        cout << "\033[35m 2. Presione 2 para registrar un nuevo usuario\033[0m" << endl;
    }
    cout << endl;
    cout << "\033[36mSeleccione una opcion: \033[0m";
    if (cin >> opc && (opc == 1 || opc == 2)) {
        break; // Validar que la opción sea 1 o 2
    } else {
        cout << "\033[31m" << "❌ Opcion invalida. Intente nuevamente." << "\033[0m" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
        cout << endl;
    }
}
cout << endl;

    switch (opc) {
        case 1:
            cout << "\033[35m" << "🔒 INGRESE SUS CREDENCIALES DE INICIO DE SESION:" << "\033[0m" << endl;
            while (intentos > 0) {
                cout << endl;
                cout << "\033[35m👤 USUARIO: \033[0m" << endl;
                cin >> users;
                cout << endl;
                cout << "\033[35m🔑 CONTRASEÑA: \033[0m" << endl;
                cin >> password;
                cout << endl;
                if (userManager.validateUser(users, password)) {
                    cout << "\033[32m" << "✅ Inicio de sesion exitoso!" << "\033[0m" << endl;
                    return 1; // login exitoso
                } else {
                    intentos--;
                    cout << "\033[31m" << " ❌ CREDENECIALES INCORRECTAS. Intentos restantes: " << intentos << "\033[0m" << endl;
                }
            }
            cout << " ❌ No quedan intentos. Por favor, registre un nuevo usuario." << endl;
            cout << endl;
            return 0; // login fallido
        case 2:
            cout << "\033[36m" << "🔒 INGRESE SUS CREDENCIALES DE REGISTRO:" << "\033[0m" << endl;
            cout << endl;
            cout << "\033[35m" << "👤 USUARIO: " << "\033[0m" << endl;
            cin >> users;
            cout << endl;
            cout << "\033[35m" << "🔑 CONTRASEÑA: " << "\033[0m" << endl;
            cin >> password;
            cout << endl;
            if (!userManager.createUser(users, password)) {
                cout << "\033[31m" << "❌  El usuario o contraseña ya existe." << "\033[0m" << endl;
            } else {
                cout << "\033[32m" << "✅  Usuario creado exitosamente. Por favor, inicie sesion." << "\033[0m" << endl;
                cout << endl;
                cout << "\033[36m" << "**DEBE INICIAR SESION NUEVAMENTE**" << "\033[0m" << endl;
            }
            return -1; // registro, volver a mostrar menú
    }
    return 0; // por defecto
}