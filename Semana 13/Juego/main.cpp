#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "funciones.h"
#include "dado.h"


int main()
{
    srand(time(NULL)); // Inicializa el algoritmo para calcular nros al azar

    int dados[5];
    int maxi, mini;
    tirarDados(dados, 5);
    mostrarDados(dados, 5);
    /*maxi = maximoVector(dados, 10);
    mini = minimoVector(dados, 10);
    cout << endl << endl;
    cout << "Max: "<< maxi << endl;
    cout << "Min: "<< mini << endl;*/
    return 0;
}
