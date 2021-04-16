/*
    Dada una lista de números positivos o cero
    que finaliza cuando se ingresa un número negativo.
    Calcular:
    A) La cantidad de números pares.

*/
#include <iostream>
using namespace std;

int main(){
    int cant_pares=0;
    int n;
    bool todosPares = true;
    //bool huboImpar = false;

    cin >> n;
    while(n >= 0){
        if (n%2 == 0){
            cant_pares++;
        }
        else{
            todosPares = false;
            //huboImpar = true;
        }
        cin >> n;
    }
    cout << endl;
    cout << "Cantidad de pares: " << cant_pares;
    cout << endl << endl;

    if(todosPares == true){
        cout << "Todos fueron pares.";
    }
    else{
        cout << "Hubo algún impar.";
    }




    return 0;
}
