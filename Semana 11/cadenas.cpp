/**
    Cadenas de caracteres
*/
#include <iostream>
using namespace std;

int main(){
    int i, legajo;
    char nombre[15], apellido[15];
    cout << "Legajo: ";
    cin >> legajo;
    cout << "Ingresar apellido: ";
    cin.ignore();
    cin.getline(apellido, 15);
    cout << "Ingresar nombre: ";
    cin.getline(nombre, 15);

    cout << endl << endl << apellido << endl;
    cout << nombre << endl;
    cout << legajo << endl;

    return 0;
}
