#include <iostream>
using namespace std;

//declaracion de variables
string users;
string newUser;
int password;
int newPassword;
string idioma="es"; //idioma por defecto
//funcion para mensaje en ambos idiomas
string msg(const string& es, const string& en) {
    return (idioma == "en") ? en : es;

    
}
//registro de users/password/idioma.
void login() {
    cout << (msg("Iniciar sesion.", "Login.")) << endl;
    cout << msg("Por favor, ingrese sus credenciales:", "Please enter your credentials:") << endl;
    cout << msg("Usuario/Ussers (ej. admin): ", "User (e.g. admin): ") << endl;
    cin >> users;
    cout << msg("Contrasena/password (ej. 1982): ", "Password (e.g. 1982): ") << endl;
    cin.ignore();
    cin >> password;

//comprobacion del login. 
    if (users == "Martin" && password == 1234) {
        cout << msg("Inicio de sesion exitoso!", "Login successful!") << endl;
    } 
    else if (users == "Renzo" && password == 123456) {
        cout << msg("Inicio de sesion exitoso!", "Login successful!") << endl;
    } 
    else if (users == "Pedro" && password == 123456789) {
        cout <<  msg("Inicio de sesion exitoso!", "Login successful!") << endl;
    }
    else if (users == "Jorge" && password == 123456789) {
        cout << msg ("Inicio de sesion exitoso!", "Login successful!") << endl; 
    }
    else {
        //indique datos correctos
        cout << msg( "\033[31mDatos incorrectos. Por favor,verifique su usuario o password.\033[0m", "Incorrect data. Please check your username or password.") << endl;
    }
    
}

//si no hay usuario previo,se crea uno nuevo.
void crearUsuario() {
    
    cout << msg ("No se encontraron credenciales previas.", "No previous credentials found.") << endl;
    cout << msg ("Por favor, cree un nuevo usuario:", "Please create a new user:") << endl;
    cout << msg ("Usuario (ej. admin): ", "User (e.g. admin): ") << endl;
    cin >> newUser;
    cout <<  msg ("Contrasena (ej. 1982): ", "Password (e.g. 1982): ") << endl;
    cin.ignore();
    cin >> newPassword;
    cout << msg ("Usuario creado exitosamente!", "User created successfully!") << endl;
}

