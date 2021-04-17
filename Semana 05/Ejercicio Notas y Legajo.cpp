#include <iostream>
using namespace std;

/*
Dadas dos notas de cinco estudiantes y sus respectivos legajos.
Calcular e informar:

A) El porcentaje de alumnos promocionados, regularizados, que rindieron
recuperatorio o que recursaron.
B) El legajo del estudiante con mejor promedio.
C) El estado que más estudiantes hayan alcanzado.

El estado final corresponde a las siguientes reglas:

"Promociona" - Si ambos parciales tienen nota 8 o más.
"Regulariza" - Si ambos parciales tienen nota 6 o más.
"Recupera" -   Si algún parcial tiene nota 6 o más.
"Recursa" -    Si ambos parciales tienen nota 5 o menos.

Sólo puede tener uno de los estados a la vez.

*/

int main() {
    const int CANTIDAD_ALUMNOS = 5;
    int legajo, nota1, nota2;
    int i;

    //A
    float porcprom, porcreg, porcrecup, porcrecursa;
    int canprom, canreg, canrecup, canrecursa;
    canprom = canreg = canrecup = canrecursa = 0;

    //B
    float promedio, prom_max;
    int legajo_max;

    //C

    for (i = 1; i <= CANTIDAD_ALUMNOS; i++)
    {
        cout << "Ingrese Legajo: ";
        cin >> legajo;

        cout << "Ingrese Nota 1: ";
        cin >> nota1;

        cout << "Ingrese Nota 2: ";
        cin >> nota2;

        if (nota1 >= 8 && nota2 >= 8) {
            // Promociona
            canprom++;
        }
        else {
            if (nota1 >= 6 && nota2 >= 6) {
                //Regulariza
                canreg++;
            }
            else {
                if (nota1 >= 6 || nota2 >= 6) {
                    //Recupera
                    canrecup++;
                }
                else {
                    //Recursa
                    canrecursa++;
                }
            }
        }

        // B
        promedio = (nota1 + nota2) / 2.0f;

        if (i == 1 || promedio > prom_max ) {
            prom_max = promedio;
            legajo_max = legajo;
        }

    }
    // A
    porcprom = ((float)canprom / CANTIDAD_ALUMNOS) * 100;
    porcrecup = ((float)canrecup / CANTIDAD_ALUMNOS) * 100;
    porcrecursa = ((float)canrecursa / CANTIDAD_ALUMNOS) * 100;
    porcreg = ((float)canreg / CANTIDAD_ALUMNOS) * 100;
    cout << endl<<"Punto A" << endl;
    cout << "Promocionados: " << porcprom <<"%"<< endl;
    cout << "Regularizados: " << porcreg <<"%"<< endl;
    cout << "Recupera: " << porcrecup <<"%"<< endl;
    cout << "Recursa: " << porcrecursa <<"%"<< endl;

    cout << endl << "Punto B" << endl;
    cout << "Legajo mayor Promedio: " << legajo_max;

	return 0;
}