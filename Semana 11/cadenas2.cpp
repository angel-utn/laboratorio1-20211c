#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char pais1[30], pais2[30];
    int r;
    cout << "Nombre de país: ";
    cin >> pais1;
    cout << "Nombre de país: ";
    cin >> pais2;
    // Comparar
    // int strcmp(pais1, pais2);     Diferencia mayúsculas de minúsculas
    // int strcasecmp(pais1, pais2); No diferencia mayúsculas de minúsculas
    // 0  si pais1 == pais2
    // >0 si pais1 > pais2
    // <0 si pais1 < pais2
    r = strcasecmp(pais1, pais2);
    cout << r;

    // Asignar
    // pais2 = pais1;
    // Copia el segundo parámetro al primer parámetro
    strcpy(pais2, pais1);
    cout << pais2;
    return 0;
}
