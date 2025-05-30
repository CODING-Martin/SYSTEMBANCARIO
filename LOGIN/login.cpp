#include <iostream>
#include <string>
#include <map>
#include "config.h"
#include <thread>
#include <chrono>
#include "gestionUsuarios.h"
using namespace std;
extern UserManager userManager;

// Función para registrar el inicio de sesión del usuario
// Esta función solicita al usuario su nombre de usuario y contraseña, y verifica si son correctos.
void RegistroLogin() {
    cout << "\033[34m" << "ACCESO AL SISTEMA" << "\033[0m" << endl;
    int intentos = 3;
    string users, password;
    int opc;
    cout << " 1. Presione 1 para iniciar sesion (SOLO ADMINISTRADOR)" << endl;
    cout << " 2. Presione 2 para registrar un nuevo usuario" << endl;
    cin >> opc;
    switch (opc) {
        case 1:
            cout << "\033[34m" << "INGRESE SUS CREDENCIALES DE INICIO DE SESION" << "\033[0m" << endl;
            while (intentos > 0) {
                cout << "USUARIO: " << endl;
                cin >> users;
                cout << "CONTRASENA: " << endl;
                cin >> password;
                if (userManager.validateUser(users, password)) {
                    cout << "\033[32m" << "Inicio de sesion exitoso!" << "\033[0m" << endl;
                    return;
                } else {
                    intentos--;
                    cout << "\033[31m" << "CREDENECIALES INCORRECTAS. Intentos restantes: " << intentos << "\033[0m" << endl;
                }
            }
            cout << "No quedan intentos. Por favor, registre un nuevo usuario." << endl;
            break;
        case 2:
            cout << "\033[34m" << "INGRESE SUS CREDENCIALES DE REGISTRO" << "\033[0m" << endl;
            cout << "USUARIO: " << endl;
            cin >> users;
            cout << "CONTRASENA: " << endl;
            cin >> password;
            if (!userManager.createUser(users, password)) {
                cout << "\033[31m" << "El usuario o contrasena ya existe." << "\033[0m" << endl;
            } else {
                cout << "\033[32m" << "Usuario creado exitosamente. Por favor, inicie sesion." << "\033[0m" << endl;
                cout << "\033[34m" << "DEBE INICIAR DE SESION NUEVAMENTE" << "\033[0m" << endl;
                
            }
            break;
    }
}

