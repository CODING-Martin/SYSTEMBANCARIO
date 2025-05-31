#include <windows.h>
#include <iostream>
#include <string>
#include "interfaz.h"
#include "operaciones.h"
#include <limits>

using namespace std;

void interfaz() {
    int opcion, limite = 6;
    double saldo = 0.0; 
    bool comprobador = false;

    do {
        do {
            cout << "=====================================" << endl;
            cout << "  BANCO DE LA UNIVERSIDAD ACONCAGUA" << endl;
            cout << "                HOLA!" << endl;
            cout << "=====================================" << endl;
            cout << "\n 1) Consultar estado bancario" << endl;
            cout << "\n 2) Transferir dinero" << endl;
            cout << "\n 3) Ingresar dinero" << endl;
            cout << "\n 4) Recibir dinero" << endl;
            cout << "\n 5) Préstamos" << endl;
            cout << "\n 6) Cerrar sesión" << endl;
            cout << "=====================================" << endl;
            cout << "Opción: ";

            if (!(cin >> opcion)) {  // Validación de entrada
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Error: Debe ingresar un número válido." << endl;
                continue;
            }

            comprobador = comprobadorDeOpciones(opcion, limite);
        } while (!comprobador);

        operacionesMenu(opcion, saldo);

        if (opcion == 6) {
            if (cerrarSesion()) {
                break; 
            }
        }
    } while (true);
}
