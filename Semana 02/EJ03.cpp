/*
Hacer un programa para ingresar una letra en mayúsculas y mostrar
cuántas letras de diferencia hay en el alfabeto con respecto a
la A.
Ejemplo:
Si el usuario ingresa la letra C. Hay dos letras de diferencia
con respecto a la A.
*/
#include <iostream>
using namespace std;

int main(){
    char letra
    //char A = 65;
    int distancia;

    cout << "Ingresar una letra en mayúsculas: ";
    cin >> letra;
    distancia = letra - 'A';
    cout << "Distancia con respecto a la A: " << distancia << endl;
    //cout << endl << endl << "ASCII A: " << (int)A;
    return 0;
}
