//Nombre: Mar�a Soledad Arena
//TP N�: 03
//EJ N�: 07
/*Comentarios:
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo m�ximo.
El sueldo m�nimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
using namespace std;

#include <clocale>

int main(void){
	setlocale(LC_ALL, "Spanish");
	int i;
	float sueldoMax, sueldoMin, sueldo;
	float acum = 0;
	int con = 0;
    sueldoMax = 0;

	for( i = 0; i<10; i++){
        cout << "SUELDO: ";
        cin >> sueldo;
        acum += sueldo;
        if( i == 0){
            sueldoMax = sueldo;
            sueldoMin = sueldo;
        }
        if( sueldo > sueldoMax ){
            sueldoMax = sueldo;
        }
        else{
            if( sueldo < sueldoMin ){
                sueldoMin = sueldo;
            }
        }
        if( sueldo > 50000 ){
            con++;
        }
	}

	cout << "El sueldo m�ximo: " << sueldoMax << endl;
	cout << "El sueldo m�nimo: " << sueldoMin << endl;
	cout << "El promedio: " << acum/10 << endl;
	cout << "Cantidad de sueldos mayores a $50000: " << con << endl;

	return 0;
}
