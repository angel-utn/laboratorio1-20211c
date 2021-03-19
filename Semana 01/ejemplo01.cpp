#include <iostream>
using namespace std;

int main(){
    const int ANIO = 2021;
    int num1, num2, resultado;

    cout << "Primer ejercicio de " << ANIO << endl << endl;

    cout << "Ingresar el primer número: ";
    cin >> num1;
    cout << "Ingresar el segundo número: ";
    cin >> num2;
    resultado = num1 + num2;
    cout << endl << "La suma es: " << resultado;

    return 0;
}
