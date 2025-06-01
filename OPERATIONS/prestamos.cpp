#include <iostream>
#include <limits>
#include "operaciones.h"
#include "interfaz.h"
#include <iomanip>

using namespace std;

//funcion para dar prestamos, debe superar el 1M de saldo para poder solicitar un prestamo
void prestamos(double& saldo) {
    double importePrestamos;
    double prestamoMaximo, deuda;
    int cuotas;
    double interes = 0.0; // Interés del 20% para préstamos menores a $1,000,000

    if (saldo >= 1000000) {
        do {
            system("cls");
            cout << "\033[35mIngrese la cantidad de cuotas que desea SIN INTERES:\033[0m" << endl;
            cout << "\033[32m1) 3 cuotas sin interes\033[0m" << endl;
            cout << "\033[32m2) 6 cuotas sin interes\033[0m" << endl;
            cout << "\033[32m3) 8 cuotas sin interes\033[0m" << endl;
            cout << "\033[32m4) 12 cuotas sin interes\033[0m" << endl;
            cout << "\033[32m5) 24 cuotas sin interes\033[0m" << endl;
            cin >> cuotas;
            if (cin.fail() || cuotas < 1 || cuotas > 5) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\033[31mPor favor, seleccione una opción valida (1-5). Intente nuevamente.\033[0m" << endl;
                cout << "\033[36mPresione ENTER para continuar...\033[0m";
                cin.get();
            }
        } while (cuotas < 1 || cuotas > 5 || cin.fail());
        // Asignar el número real de cuotas
        switch (cuotas) {
            case 1: cuotas = 3; break;
            case 2: cuotas = 6; break;
            case 3: cuotas = 8; break;
            case 4: cuotas = 12; break;
            case 5: cuotas = 24; break;
        }
    } else if (saldo > 100000) {
        do {
            system("cls");
            interes = 0.25;
            cout << "\033[31mSu saldo es menor a $1,000,000. Solo puede elegir 3 o 6 cuotas CON INTERES.\033[0m" << endl;
            cout << "\033[35mIngrese la cantidad de cuotas que desea:\033[0m" << endl;
            cout <<endl;
            cout << "\033[34m1) 3 cuotas con interes\033[0m" << endl;
            cout << "\033[34m2) 6 cuotas con interes\033[0m" << endl;
            cin >> cuotas;
            if (cin.fail() || (cuotas != 1 && cuotas != 2)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\033[31mPor favor, seleccione una opción válida (1 o 2).\033[0m" << endl;
                cout << "\033[36mPresione ENTER para continuar...\033[0m";
                cin.get();
            }
        } while (cuotas != 1 && cuotas != 2 || cin.fail());
        cuotas = (cuotas == 1) ? 3 : 6;
    } else {
        system("cls");
        cout << "\033[31m❌ Su saldo es menor o igual a $100,000. No puede solicitar un préstamo.\033[0m" << endl;
        cout << "\033[36mPresione ENTER para continuar...\033[0m";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        return;
    }
    calcularPrestamos(saldo, prestamoMaximo, cuotas);
    do {
        system("cls");
        cout << "\033[35mEn base a su saldo le podemos prestar un importe máximo de $\033[0m"
            << fixed << setprecision(2) << prestamoMaximo << "." << endl;
        cout << "\033[35mPor favor, ingrese el monto que desea solicitar como préstamo: $\033[0m";
        cin >> importePrestamos;
        if (cin.fail() || importePrestamos > prestamoMaximo || importePrestamos <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
            cout << "\033[31m❌ El importe debe ser numérico, mayor a 0 y no mayor que el máximo permitido. Intente nuevamente.\033[0m" << endl;
            cout << "\033[36mPresione ENTER para continuar...\033[0m";
            cin.get();
        }
    } while (importePrestamos > prestamoMaximo || importePrestamos <= 0 || cin.fail());
    saldo += importePrestamos;
    deuda = importePrestamos;
    system("cls");
    cout << "\033[32m✅ Su préstamo fue exitoso. Su saldo ahora es de $\033[0m"
        << fixed << setprecision(2) << saldo << "." << endl;
        double importeCuota = (importePrestamos * (1 + interes)) / cuotas;
        cout << "\033[35mEl importe de cada cuota es de $\033[0m"
        << fixed << setprecision(2) << importeCuota << "." << endl;
    cout << "\033[36mPresione ENTER para continuar...\033[0m";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}