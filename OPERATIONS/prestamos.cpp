#include <iostream>
#include "operaciones.h"
using namespace std;
void prestamos(double saldo){
    double importePrestamos;
    double prestamoMaximo, deuda;
    int coutas;
    bool comprobador = false;
    do
    {
        cout << "Ingrese la cantidad de coutas que desea pagar: ";
        cin >> coutas;
        if (coutas > 0){
            cout << "El importe de cada couta es de $" << (saldo / coutas) << "." << endl;
            cout << "Presione ENTER para continuar...";
            cin.get();
            comprobador == false;
        }
    } while (comprobador == false);
    comprobador = false;
    void calcularPrestamos(double saldo, double prestamoMaximo, int coutas);
    do
    {
        cout << "En base a su sueldo le podemos prestar un importe maximo de $" << prestamoMaximo << "." << endl;
        cout << "Ingrese el importe a prestar: $";
        cin >> importePrestamos;
        if (importePrestamos > prestamoMaximo){
            cout << "El importe no puede ser mayor que el maximo permitido." << endl;
            cout << "Presione ENTER para continuar...";
            cin.get();
            comprobador == false;
        }
    } while (comprobador == false);
    
    deuda = importePrestamos;
    cout<<"Su prestamo fue exitoso. Su saldo ahora es de $" << saldo + importePrestamos << "." << endl;
    cout << "Presione ENTER para continuar..."; 
    cin.get();
}
    
