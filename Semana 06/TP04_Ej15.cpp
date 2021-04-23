//Nombre: Mar�a Soledad Arena
//TP N�:
//EJ N�:
/*Comentarios:
Hacer un programa que contenga un men� con el siguiente formato.
Men� Principal
------------------------------
1 - Ingresar medida en metros
2 - Convertir a cent�metros
3 - Convertir a kil�metros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa
Al ingresar a la opci�n 1, nos pedir� una medida (float) en metros que con las siguientes opciones del men� podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y s�lo finalizar� al ingresar a la opci�n 0.
*/

#include <iostream>
using namespace std;

#include <clocale>

int main(void){
	setlocale(LC_ALL, "Spanish");

	float medida;
	int opcion;
	bool b=false;

	do{
        cout << "Men� Principal" << endl;
        cout << "------------------------------" << endl;
        cout << "1 - Ingresar medida en metros" << endl;
        if (b==true){
            cout << "2 - Convertir a cent�metros" << endl;
            cout << "3 - Convertir a kil�metros" << endl;
            cout << "4 - Convertir a pulgadas" << endl;
            cout << "5 - Convertir a pies" << endl;
        }

        cout << "-----------------------------" << endl;
        cout << "0 - Salir del programa" << endl;
        cin >> opcion;

        switch (opcion){
        case 1 :
            cout << "1 - Ingresar medida en metros: ";
            cin >> medida;
            b = true;
            break;
        case 2 :
            cout << "Metros en cm: " << medida*100 << endl;
            break;
        case 3 :
            cout << "Metros en km: " << medida/1000 << endl;
            break;
        case 4 :
            cout << "Metros en pulgadas: " << medida*39.37 << endl;
            break;
        case 5 :
            cout << "Metros en pies: " << medida*3.28 << endl;
            break;
        case 0 :
            cout << "HASTA LUEGO" << endl;
            break;
        default:
            cout << "OPCI�N INVALIDA " << endl;
            break;
        }

	}while (opcion != 0);

	return 0;
}
