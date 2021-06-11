#include <iostream>
using namespace std;
#include <cstdlib>
#include "funciones.h"
#include "dado.h"

void mostrarVector(int v[], int tam){
    int i;
    for(i=0; i<tam; i++){
        cout << v[i] << " ";
    }
}
int maximoVector(int v[], int tam){
    int i, maximo;
    maximo = v[0];

    for(i=1; i<tam; i++){
        if (v[i] > maximo){
            maximo = v[i];
        }
    }
    return maximo;
}
int minimoVector(int v[], int tam){
    int i, minimo;
    minimo = v[0];

    for(i=1; i<tam; i++){
        if (v[i] < minimo){
            minimo = v[i];
        }
    }
    return minimo;
}
void tirarDados(int dados[], int tam){
    int i;
    for(i=0; i<tam; i++){
        dados[i] = rand()%6+1; //Calcula un nro al azar entre 1 y 6
    }
}
void mostrarDados(int dados[], int tam){
    int i;
    for(i=0; i<tam; i++){
        dibujarDado(10*(i+1), 10, dados[i], 7);
    }
}










