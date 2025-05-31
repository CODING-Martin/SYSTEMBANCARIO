#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

void recibirDinero(double& saldo) {
    double monto;
    do {
        system("cls");
        cout << "\033[34m====================================\033[0m" << endl;
        cout << "\033[34m          RECIBIR DINERO \033[0m" << endl;
        cout << "\033[34m====================================\033[0m" << endl;
        cout << "\033[35mIngrese el importe recibido: $\033[0m";
        cin >> monto;
        if (cin.fail() || monto <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[31m❌ El importe debe ser mayor a 0 y numérico. Intente nuevamente.\033[0m" << endl;
            cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
            cin.get();
        }
    } while (monto <= 0);

    saldo += monto;
    system("cls");
    cout << "\033[32m✅ Dinero recibido exitosamente.\033[0m" << endl;
    cout << "\033[32mSu saldo ahora es de $\033[0m" << fixed << setprecision(2) << saldo << "." << endl;
    cout << "\033[36mPresione ENTER para continuar...\033[0m" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}