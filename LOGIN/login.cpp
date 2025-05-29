#include <iostream>
#include <string>
#include <map>
#include "config.h"  // si lo creaste
#include <thread>  
#include <chrono> 
#include "gestionUsuarios.h" // Para acceder a usuarios y crearUsuario()
using namespace std;


extern map<string, int> usuarios; // El mapa está en gestionUsuarios.cpp/ extern sirve para compartirlo entre archivos
extern string idioma;

string msg(const string& es, const string& en) {
    return (idioma == "en") ? en : es;
}
// Función para verificar las credenciales del usuario
bool verificarCredenciales(const string& u, int p) {
    auto it = usuarios.find(u);
    return it != usuarios.end() && it->second == p;
}
// Función para registrar el inicio de sesión del usuario
// Esta función solicita al usuario su nombre de usuario y contraseña, y verifica si son correctos.
void RegistroLogin() {
    cout << msg("Bienvenido al sistema bancario.", "Welcome to the banking system.") << endl;
    int intentos = 3;
    string users;
    int password;
    int opc;
    cout <<msg (" 1. Presione 1 para iniciar sesion" ,"Press 1 to login\n");
    cout <<msg (" 2. Presione 2 para registrar un nuevo usuario" ,"Press 2 to register a new user\n");
    switch (opc) {
        case 1:
        cout <<msg ("ingrese sus credenciales","enter your credentials to login\n");
        cout << msg("Usuario: ", "User: ");
        cin >> users;
        cout << msg("Contrasena: ", "Password: ");
        cin >> password;
        if (verificarCredenciales(users, password)) {
            cout << "\033[32m" << msg("Inicio de sesion exitoso!", "Login successful!") << "\033[0m" << endl;
            return;
        }
        case 2:
        cout << msg("Por favor, cree un nuevo usuario.", "Please create a new user.") << endl;
        cout << msg("Nombre de usuario: ", "Username: ");
        cin >> users;
        if (usuarios.find(users) != usuarios.end()) {
            cout << msg("El usuario ya existe.", "The user already exists.") << endl;
            return;
        }
        int password;
        cout << msg("Contrasena: ", "Password: ");
        cin >> password;
        // crearUsuario(users, password);
        break;
        default:
        break;
    }
    // Bucle para solicitar las credenciales del usuario 
    while (intentos > 0) {
        cout << msg("Usuario: ", "User: ");
        cin >> users;
        cout << msg("Contrasena: ", "Password: ");
        cin >> password;
        if (verificarCredenciales(users, password)) {
            cout << "\033[32m" << msg("Inicio de sesion exitoso!", "Login successful!") << "\033[0m" << endl;
            return;
        } else {
        intentos--;
        cout << "\033[31m" << msg(
        string("Credenciales incorrectas. Intentos restantes: ") + to_string(intentos),
        string("Incorrect credentials. Remaining attempts: ") + to_string(intentos)
    ) << "\033[0m" << endl;
}
        if (intentos == 0) {
            cout << msg("No quedan intentos. Por favor, se recomienda crear un nuevo usuario.",
                        "No attempts left. Please create a new user.") << endl;
                        for (int i = 10; i > 0; --i) {
                            cout << "\r" << msg("Espere ", "Wait ") << i << msg(" segundos...", " seconds...") << flush;
                        this_thread::sleep_for(chrono::seconds(10));
                        }
                        cout << endl;
                        // crearUsuario();  
                        return;
        }
    }
}