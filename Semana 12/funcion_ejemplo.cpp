#include <iostream>
using namespace std;

void mostrar_primos_entre(int, int);
bool es_primo(int);

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
void mostrar_primos_entre(int inicio, int fin){
    int i;
    bool r;
    for(i=inicio; i<=fin; i++){
        r = es_primo(i);
        if (r == true){
            cout << i << endl;
        }
    }
    return;
}

int main(){
    int n1, n2;

    cout << "Ingresar número inicial: ";
    cin >> n1;
    cout << "Ingresar número final  : ";
    cin >> n2;

    mostrar_primos_entre(n1, n2);


    return 0;
}
