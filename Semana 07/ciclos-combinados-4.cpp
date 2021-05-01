/**
Una agencia de viaje posee la información de algunos destinos turísticos que
comercializó en algunos de los meses del año 2020. Por cada registro se ingresa:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)
La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No se sabe la cantidad de destinos turísticos ni la cantidad de meses
que cada destino trabajó. Para indicar el fin del programa se ingresa un código de destino
igual a cero.
Se pide calcular e informar:
A) VARIANTE:
Por cada semestre del año 2020, la cantidad de
pasajes vendidos.
B) Por cada destino turístico, el total recaudado.
*/

#include <iostream>
using namespace std;

int main(){
    int codigo, mes, pasajes, codigoanterior;
    float total;
    //A
    int s1 = 0, s2 = 0;
    //B
    float totaldest;

    cout << "Código: ";
    cin >> codigo;

    while (codigo != 0){
        codigoanterior = codigo;
        totaldest = 0;
        while (codigo == codigoanterior){
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes vendidos: ";
            cin >> pasajes;
            cout << "Recaudado: $";
            cin >> total;
            cout << "-----------------------" << endl;
            // A
            if (mes <= 6){
                s1 += pasajes;
            }
            else{
                s2 += pasajes;
            }

            totaldest += total; //B
            cout << "Código: ";
            cin >> codigo;
        }
        cout << "Recaudación destino " << codigoanterior << ": $";
        cout << totaldest << endl;
    }
    cout << endl << endl;
    cout << "Semestre 1: " << s1 << endl;
    cout << "Semestre 2: " << s2 << endl;
    return 0;
}
