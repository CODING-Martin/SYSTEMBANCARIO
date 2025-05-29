#include <iostream>
#include <string>
#include <map>
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
    int intentos = 3;
    string users;
    int password;
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
            cout << msg("No quedan intentos. Por favor, cree un nuevo usuario.",
                        "No attempts left. Please create a new user.") << endl;
            // crearUsuario(); llamar mas tarde  
            return;
        }
    }
}