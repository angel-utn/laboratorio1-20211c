/*
La cuenta corriente de la famosa cantante Lady Lara ha registrado
14 movimientos durante la semana pasada. Por cada movimiento se registró:
- Número de movimiento
- Día
- Tipo ('E' - Extracción / 'D' - Depósito)
- Importe

Existe un registro por movimiento. Se desea calcular e informar:
A) El saldo final de la cuenta.
B) El porcentaje de movimientos de extracción y el porcentaje de depósito.
C) El depósito de mayor importe indicando también día y número de movimiento.
D) La cantidad de movimientos del día 10.
*/

#include <iostream>
using namespace std;

int main(){
    const int MOV = 4;
    int nv, dia, i;
    float importe;
    char tipo;

    // A
    float saldo = 0;
    // B
    int ce=0, cd=0;

    for(i=1; i<=MOV; i++){
        cout << "# Movimiento: ";
        cin >> nv;
        cout << "Día: ";
        cin >> dia;
        cout << "Tipo de movimiento: ";
        cin >> tipo;
        cout << "Importe: $";
        cin >> importe;

        // A y B
        if (tipo == 'E'){
            saldo = saldo - importe; //A
            ce++; //B
        }
        else{
            if (tipo == 'D'){
                saldo = saldo + importe;
                cd++; //B
            }
        }

    }
    cout << "Punto A" << endl << "----------------------" << endl;
    cout << "Saldo final: $ " << saldo << endl << endl;
    cout << "Punto B" << endl << "----------------------" << endl;
    cout << "% Extracciones: " << ce*100.0/MOV << endl;
    cout << "% Depósitos   : " << cd*100.0/MOV << endl;
    cout << "Punto C" << endl << "----------------------" << endl;
    cout << "Punto D" << endl << "----------------------" << endl;
    return 0;
}
