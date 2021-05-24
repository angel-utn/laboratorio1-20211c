/*
Cargar las notas del primer parcial de los 78 estudiantes
de un curso. Luego de cargar todas las notas:
- Listar las notas aprobadas (>=6) de las 78 ingresadas.
- Pedir un número y mostrar por pantalla la nota registrada.
Por ejemplo, se ingresa 10 para mostrar el décimo examen.
- Obtener la mejor calificación y cuántos estudiantes lograron
dicha calificación.
*/

#include <iostream>
using namespace std;

int main(){
    const int T = 10;
    int i, notas[T] = {};
    int nroExamen;
    int maxNota, cont=0;

    cout << "Ingresar " << T << " notas: " << endl;
    for(i=0; i<T; i++){
        cin >> notas[i];
    }
    cout << endl << endl;
    cout << "Punto A" << endl;
    for(i=0; i<T; i++){
        if (notas[i] >= 6){
            cout << notas[i] << endl;
        }
    }
    cout << endl << endl;
    cout << "Punto B" << endl;
    cout << "Ingresar número de examen: ";
    cin >> nroExamen;
    cout << "Nota: " << notas[nroExamen-1];

    cout << endl << endl;
    cout << "Punto C";
    maxNota = notas[0];
    for(i=1; i<T; i++){
        if (notas[i] > maxNota){
            maxNota = notas[i];
        }
    }
    for(i=0; i<T; i++){
        if (notas[i] == maxNota){
            cont++;
        }
    }
    cout << endl << "Máxima nota: " << maxNota << endl;
    cout << "Cantidad: " << cont;
    return 0;
}
