#include <iostream>
#include <iomanip>
#include <limits>
#include <algorithm>
using namespace std;

void transferenciaDinero(double& saldo) {
    //verificamos si el usuario tiene saldo suficiente para realizar una transferencia
    if (saldo <= 0) {
        system("cls");
        cout << "\033[31m❌ No puede realizar una transferencia porque su saldo es $0.00.\033[0m" << endl;
        cout << "\033[36mIngrese dinero antes de transferir.\033[0m" << endl;
        cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        return;
    }
    double monto;
    string destinatario;
    //transferencia exitosa de dinero
    do {
        system("cls");
        cout << "\033[34m====================================\033[0m" << endl;
        cout << "\033[34m      TRANSFERENCIA DE DINERO       \033[0m" << endl;
        cout << "\033[34m====================================\033[0m" << endl;
        cout << "\033[35mIngrese el nombre del destinatario o  ALIAS: \033[0m";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer
        getline(cin, destinatario);
        cout << "\033[35mIngrese el importe a transferir: $\033[0m";
        cin >> monto;
//comprobamos que el monto sea un numero y que sea mayor a 0 y no exceda el saldo actual
        if (cin.fail() || monto <= 0 || monto > saldo) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[31m❌ El importe debe ser mayor a 0,no puede exceder su saldo actual.\033[0m" << endl;
            cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
            cin.get();
        } 
        else if (destinatario.empty()) {
            cout << "\033[31m❌ El nombre del destinatario no puede estar vacío.\033[0m" << endl;
            cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
            cin.get();
        }
        //comprobamos que el destinatario no sea vacio y que el importe no sea negativo
    } while (cin.fail() || monto <= 0 || monto > saldo);
    saldo -= monto;
    system("cls");
    string destinatarioMayus=destinatario;
    transform(destinatarioMayus.begin(), destinatarioMayus.end(), destinatarioMayus.begin(), ::toupper);

    cout << "\033[32m✅ Transferencia de $" << fixed << setprecision(2) << monto
        << " a \"" << destinatarioMayus << "\" realizada exitosamente.\033[0m" << endl;
    cout << "\033[32mSu saldo ahora es de $\033[0m" << fixed << setprecision(2) << saldo << "." << endl;
    cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}