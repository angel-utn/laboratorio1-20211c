// Ejercicio 4 TP 1
/*
 Hacer un programa para ingresar por teclado la cantidad
 de asientos disponibles de un avión y la cantidad de
 asientos ocupados. Luego, calcular e informar el porcentaje
 de ocupación y el porcentaje de no ocupación del mismo.
*/
#include <iostream>
using namespace std;

int main(){
    int cant_disponibles, cant_ocupados, cant_totales;
    float porc_ocupados, porc_disponibles;

    cout << "Ingresar cantidad de asientos ocupados: ";
    cin >> cant_ocupados;
    cout << "Ingresar cantidad de asientos disponibles: ";
    cin >> cant_disponibles;
    cant_totales = cant_ocupados + cant_disponibles;

    /*
        int / int     --> int (cociente)
        float / int   --> float
        int / float   --> float
        float / float --> float
    */
    porc_ocupados = (float)cant_ocupados/cant_totales*100;
    porc_disponibles= cant_disponibles/(float)cant_totales*100;
    cout << endl;
    cout << "Ocupados   : " << porc_ocupados << "%" << endl;
    cout << "Disponibles: " << porc_disponibles<< "%" << endl;


    return 0;
}
