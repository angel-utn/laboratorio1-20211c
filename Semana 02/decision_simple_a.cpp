#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Ingresar número: ";
    cin >> num;

    if (num > 0){
        cout << "Es positivo.";
    }
    if (num < 0){
        cout << "Es negativo.";
    }
    if (num == 0){
        cout << "Es cero.";
    }


    return 0;
}
