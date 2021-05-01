/*
9
Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
Máximo Negativo: -3.
Mínimo Positivo: 2.
*/

#include <iostream>
using namespace std;

int main(){
    int i, n, maxineg, minipos;
    maxineg = 0;
    minipos = 0;

    for(i=1; i<=5; i++){
        cout << "Número: ";
        cin >> n;

        if (n > 0){
            if (minipos == 0 || n < minipos){
                minipos = n;
            }
        }
        else{
            if (n < 0){
                if (maxineg == 0 || n > maxineg){
                    maxineg = n;
                }
            }
        }
    }
    cout << endl << endl;
    if (maxineg != 0){
        cout << "Máximo negativos: " << maxineg << endl;
    }
    if (minipos != 0){
        cout << "Mínimo positivos: " << minipos << endl;
    }

    return 0;
}
