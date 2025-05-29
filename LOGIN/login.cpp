#include <iostream>
#include <string>
#include <map>
#include "config.h"  // si lo creaste
#include <thread>  
#include <chrono> 
#include "gestionUsuarios.h" // Para acceder a usuarios y crearUsuario()
using namespace std; 
extern string idioma;
extern UserManager userManager; // Instancia de UserManager para manejar usuarios
bool createUser(const std::string& username, const std::string& password);

// Función para mostrar mensajes en el idioma seleccionado
string msg(const string& es, const string& en) {
    return (idioma == "en") ? en : es;
}

// Función para registrar el inicio de sesión del usuario
// Esta función solicita al usuario su nombre de usuario y contraseña, y verifica si son correctos.
void RegistroLogin() {
    cout << "\033[34m" << msg("ACCESO AL SISTEMA", "SYSTEM ACCESS") << "\033[0m" << endl;
    int intentos = 3;
    string users, password;
    int opc;
    cout << msg(" 1. Presione 1 para iniciar sesion (SOLO ADMINISTRADOR)", "Press 1 to login(ONLY ADMIN)\n") << endl;
    cout << msg(" 2. Presione 2 para registrar un nuevo usuario", "Press 2 to register a new user\n") << endl;
    cin >> opc;
    switch (opc) {
        case 1:
            cout << "\033[34m" << msg("INGRESE SUS CREDENCIALES", "ENTER YOUR CREDENTIALS TO LOGIN") << "\033[0m" << endl;
            while (intentos > 0) {
                cout << msg("Usuario: ", "User: ") << endl;
                cin >> users;
                cout << msg("Contrasena: ", "Password: ") << endl;
                cin >> password;
                if (userManager.validateUser(users, password)) {
                    cout << "\033[32m" << msg("Inicio de sesion exitoso!", "Login successful!") << "\033[0m" << endl;
                    return;
                } else {
                    intentos--;
                    cout << "\033[31m" << msg(
                        string("Credenciales incorrectas. Intentos restantes: ") + to_string(intentos),
                        string("Incorrect credentials. Remaining attempts: ") + to_string(intentos)
                    ) << "\033[0m" << endl;
                }
            }
            cout << msg("No quedan intentos. Por favor, registre un nuevo usuario.", "No attempts left. Please register a new user.") << endl;
            break;
    case 2:
    cout << msg("Nombre de usuario: ", "Username: ") << endl;
    cin >> users;
    cout << msg("Contrasena: ", "Password: ") << endl;
    cin >> password;
    if (!userManager.createUser(users, password)) {
        cout << "\033[31m" << msg("El usuario o contrasena ya existe.", "The user or password already exists.") << "\033[0m" << endl;
    } else {
        cout << "\033[32m" << msg("Usuario creado exitosamente. Por favor, inicie sesion.", "User created successfully. Please log in.") << "\033[0m" << endl;
        // Pide login inmediatamente
        int intentos = 3;
        while (intentos > 0) {
            cout << msg("Usuario: ", "User: ") << endl;
            string loginUser, loginPass;
            cin >> loginUser;
            cout << msg("Contrasena: ", "Password: ") << endl;
            cin >> loginPass;
            if (userManager.validateUser(loginUser, loginPass)) {
                cout << "\033[32m" << msg("Inicio de sesion exitoso!", "Login successful!") << "\033[0m" << endl;
                // Aquí puedes llamar a tu menú de operaciones o interfaz
                //operaciones();
                return;
            } else {
                intentos--;
                cout << "\033[31m" << msg(
                    string("Credenciales incorrectas. Intentos restantes: ") + to_string(intentos),
                    string("Incorrect credentials. Remaining attempts: ") + to_string(intentos)
                ) << "\033[0m" << endl;
            }
        }
        cout << msg("No quedan intentos. Intente más tarde.", "No attempts left. Try again later.") << endl;
    }
    break;
    }
}
