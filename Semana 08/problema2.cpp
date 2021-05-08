#include <iostream>
using namespace std;

int main(){
    int dado1, dado2, dado3, suma, puntos=0;

    cout << "Ingresar el valor de los tres dados: " << endl;
    cin >> dado1 >> dado2 >> dado3;

    suma = dado1+dado2+dado3;

    if (suma >= 7 && suma <= 14){
        puntos = suma;
    }

    cout << "Puntaje: " << puntos << endl;

    return 0;
}
