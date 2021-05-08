#include <iostream>
using namespace std;

int main(){
    const int CENTROS=3; // 10 centros
    int i, cc, af, edad;
    char genero;
    float temp;

    // Punto A
    int masc, fem, otros, total;
    float porM, porF, porO;
    masc = fem = otros = 0;
    // PuntoB
    int cantB = 0;
    // Punto C
    int cantPacientes;
    float sumaTemp, promedio;


    for(i=1; i<=CENTROS; i++){
        cout << "Centro: ";
        cin >> cc;
        cout << "Afiliado: ";
        cin >> af;
        cantPacientes = 0;
        sumaTemp = 0;

        while (af != 0){
            cout << "Edad: ";
            cin >> edad;
            cout << "Género: ";
            cin >> genero;
            cout << "Temperatura: ";
            cin >> temp;
            // Punto A
            switch(genero){
                case 'F':
                case 'f':
                    fem++;
                break;
                case 'M':
                case 'm':
                    masc++;
                break;
                case 'O':
                case 'o':
                    otros++;
                break;
            }

            //Punto B
            /* Alternativa
            if (genero == 'F' || genero == 'f'){
                if (edad > 30 && temp < 35){
                    cantB++;
                }
            }*/

            if ((genero == 'F' || genero == 'f' ) && edad > 30 && temp < 35){
                cantB++;
            }

            // Punto C
            cantPacientes++;
            sumaTemp += temp;

            cout << "Afiliado: ";
            cin >> af;
        }
        cout << endl << endl << "Punto C" << endl;
        cout << "---------------------------" << endl;
        promedio = sumaTemp/cantPacientes;
        cout << "Número centro: " << cc << endl;
        cout << "Promedio temp: " << promedio << endl << endl;
    }
    cout << endl << endl << "Punto A" << endl;
    cout << "---------------------------" << endl;
    total = fem + masc + otros;
    porF = fem*100.0/total;
    porM = masc*100.0/total;
    porO = otros*100.0/total;
    cout << "% Fem  : " << porF << endl;
    cout << "% Masc : " << porM << endl;
    cout << "% Otros: " << porO << endl;

    cout << endl << endl << "Punto B" << endl;
    cout << "---------------------------" << endl;
    cout << "Cantidad: " << cantB;

    return 0;
}
