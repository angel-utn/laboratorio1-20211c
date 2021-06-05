#include <iostream>
using namespace std;

//Declaraciones
bool es_primo(int);
//void saludar();
//int devolver();

int main(){
    int nro, contPrimos = 0;
    bool r;
    cout << "Ingresar número: ";
    cin >> nro;
    while (nro != 0){
        r = es_primo(nro);
        if (r == true){
            contPrimos++;
        }
        cout << "Ingresar número: ";
        cin >> nro;
    }

    cout << endl << "Cantidad de primos: " << contPrimos;
    return 0;
}

//Definición
bool es_primo(int n){
    int i, div=0;
    for(i=1; i<=n; i++){
        if (n%i == 0){
            div++;
        }
    }
    if (div == 2){
       return true;
    }
    else{
        return false;
    }
}
/*
void saludar(){
    cout << "Hola" << endl;
    return;
}
int devolver(){
    return 100;
}
*/












