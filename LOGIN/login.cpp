#include <iostream>
using namespace std;

//declaracion de variables
string users;
string newUser;
int password;
int newPassword;

void mostrarLogin() {
    //cout << "Hola desde login!" << endl;
}
//registro de users/password.
void login() {
    
    cout << "Iniciar sesion." << endl;
    cout << "Por favor, ingrese sus credenciales:" << endl;
    cout << "Usuario (ej. admin): " << endl;
    cin >> users;
    cout << "Contraseña (ej. 1982): " <<endl;
    cin.ignore();
    cin >> password;

//comprobacion del login. 
    if (users == "Martin" && password == 1234) {
        cout << "Inicio de sesion exitoso!" << endl;
    } 
    else if (users == "Renzo" && password == 123456) {
        cout << "Inicio de sesion exitoso!" << endl;
    } 
    else if (users == "Pedro" && password == 123456789) {
        cout << "Inicio de sesion exitoso!" << endl;
    }
    else if (users == "Jorge" && password == 12345678910) {
        cout << "Inicio de sesion exitoso!" << endl;
    }
    else {
        cout << "\033[Credenciales Incorrectas,Porfavor intente de nuevo.\033[0m" << endl;
        
    }
    
}
//si no hay usuario previo,se crea uno nuevo.
void crearUsuario() {
    
    cout << "No se encontraron credenciales previas." << endl;
    cout << "Por favor, cree un nuevo usuario:" << endl;
    cout << "Usuario (ej. admin): " << endl;
    cin >> newUser;
    cout << "Contraseña (ej. 1982): " << endl;
    cin.ignore();
    cin >> newPassword;
    cout << "Usuario creado exitosamente!" << endl;
}

