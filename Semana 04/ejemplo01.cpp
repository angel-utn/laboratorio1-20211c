/*
Dadas dos notas de un estudiante. Calcular e informar el estado
final en un curso.
El estado final corresponde a las siguientes reglas:

"Promociona" - Si ambos parciales tienen nota 8 o más.
"Regulariza" - Si ambos parciales tienen nota 6 o más.
"Recupera" -   Si algún parcial tiene nota 6 o más.
"Recursa" -    Si ambos parciales tienen nota 5 o menos.

Sólo puede tener uno de los estados a la vez.

*/
#include <iostream>
using namespace std;

int main(){
    int nota1, nota2, estado=0;
    cout << "Ingresar nota 1: ";
    cin >> nota1;
    cout << "Ingresar nota 2: ";
    cin >> nota2;
    cout << "\n\n";
    if (nota1 >= 8 && nota2 >= 8){
        estado = 1;
    }
    else{
        if (nota1 >= 6 && nota2 >= 6){
            estado = 2;
        }
        else{
            if (nota1 >= 6 || nota2 >= 6){
                estado = 3;
            }
            else{
                estado = 4;
            }
        }
    }

    switch(estado){
        case 1:
            cout << "Promociona la materia" << endl;
            cout << "Regulariza la materia";
        break;
        case 2:
            cout << "Regulariza la materia";
        break;
        case 3:
            cout << "Recupera parcial.";
        break;
        case 4:
            cout << "Recursa materia.";
        break;
    }

    return 0;
}
