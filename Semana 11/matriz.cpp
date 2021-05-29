/**
Se dispone de las ventas de un negocio durante el mes pasado. Por cada
venta se registró el número de venta, la forma de pago (1 a 3), el número de
día y el importe de la venta. El fin de la carga de datos se indica con
número de venta igual a 0.
Se pide calcular e informar:
A) Por cada forma de pago y día, la cantidad de ventas realizadas.
B) La cantidad de días en los que se hayan utilizado todas las formas de pago.
*/
#include <iostream>
using namespace std;

int main(){
    const int DIAS=30;
    const int FP=3;
    int mat[FP][DIAS];

    /// Poner 0 la matriz
    int i, j;
    for(i=0; i<FP; i++){
        for(j=0; j<DIAS; j++){
            mat[i][j] = 0;
        }
    }
    ///

    int venta, fp, dia;
    float importe;

    cout << "Nro venta: ";
    cin >> venta;

    while(venta != 0){
        cout << "Día: ";
        cin >> dia;
        cout << "Forma pago: ";
        cin >> fp;
        cout << "Importe: ";
        cin >> importe;
        mat[fp-1][dia-1]++;

        cout << "Nro venta: ";
        cin >> venta;
    }
    //A) Por cada forma de pago y día, la cantidad de ventas realizadas.
    cout << "Punto A" << endl;
    cout << "--------" << endl;
    for(i=0; i<FP; i++){
        cout << "Forma de pago #" << i+1 << endl;
        for(j=0; j<DIAS; j++){
            if (mat[i][j] > 0){
                cout << "Dia " << j+1 << ": " << mat[i][j] << endl;
            }
        }
        cout << endl;
    }

    //B) La cantidad de días en los que se hayan utilizado todas las formas de pago.
    cout << "Punto B" << endl;
    cout << "--------" << endl;
    // Solución #TeamContador
    /*
    int cantidadDias = 0;
    int cont;
    for(i=0; i<DIAS; i++){
        cont = 0;
        for(j=0; j<FP; j++){
            if (mat[j][i] > 0){
                cont++;
            }
        }
        if (cont == FP){
            cantidadDias++;
        }
    }
    */
    // Solución #TeamBandera
    int cantidadDias = 0;
    bool usoTodasLasFP;
    for(i=0; i<DIAS; i++){
        usoTodasLasFP = true;
        for(j=0; j<FP; j++){
            if (mat[j][i] == 0){
                usoTodasLasFP = false;
            }
        }
        if (usoTodasLasFP == true){
            cantidadDias++;
        }
    }

    cout << "Cantidad de días: " << cantidadDias << endl;
    return 0;
}
