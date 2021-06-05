#include <iostream>
using namespace std;

void poner_cero_vector(int [], int);
void mostrar_vector(int [], int);
void mostrar_matriz(float [][7], int);

int main(){
    int vec[10], vectorcito[4];
    float mat[5][7] = {};

    poner_cero_vector(vec, 10);
    poner_cero_vector(vectorcito, 4);
    mostrar_vector(vec, 10);
    cout << endl << endl;
    mostrar_vector(vectorcito, 4);
    cout << endl << endl;
    mostrar_matriz(mat, 5);
    return 0;
}

void poner_cero_vector(int v[], int tam){
    int i;
    for(i=0; i<tam; i++){
        v[i] = 0;
    }
}
void mostrar_vector(int v[], int tam){
    int i;
    for(i=0; i<tam; i++){
        cout << v[i] << " ";
    }
}
void mostrar_matriz(float m[][7], int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<7; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
