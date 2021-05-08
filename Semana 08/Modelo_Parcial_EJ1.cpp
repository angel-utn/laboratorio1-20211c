/*
Una estación meteorológica registró la información de las temperaturas y la cantidad de lluvia  de los últimos 10 días. Por cada día se registra:
Día (entero)
Temperatura máxima (float)
Temperatura mínima (float)
Milímetros de lluvia (float)

La información no se encuentra agrupada ni ordenada. Se pide calcular e informar:
A) - El día de mayor amplitud térmica. Indicar el día y la amplitud térmica.
B) - El porcentaje de días de lluvia con respecto al total de días.
C) - La cantidad de días fríos, templados y calurosos.

NOTA 1: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima. Ejemplo: Máxima: 15ºC y Mínima: 11ºC → Amplitud térmica: 15-11 = 4ºC
NOTA 2: Se considera un día frío a una temperatura máxima de 5ºC, un día templado a una temperatura máxima de 28ºC y un día caluroso a una temperatura mayor a 28ºC.
*/

#include <iostream>
using namespace std;

int main() {
	const int CANTIDAD_DIAS = 10;
	int i, dia;
	float tmax, tmin, mill, at;

	// PUNTO A
	int dmax;
	float atmax;

	// PUNTO B
	int cantlluv=0;
	float porlluv;

	// PUNTO C
	int frio, templado, caluroso; // CONTADORES
	frio = templado = caluroso = 0;


	for (i = 1; i <= CANTIDAD_DIAS; i++) {
		cout << "Ingrese Dia: ";
		cin >> dia;
		cout << "Ingrese Temperatura maxima: ";
		cin >> tmax;
		cout << "Ingrese Temperatura minima: ";
		cin >> tmin;
		cout << "Ingrese Milimetros de lluvia: ";
		cin >> mill;

		// PUNTO A
		at = tmax - tmin;
		if (i==1 || at > atmax) {
			atmax = at;
			dmax = dia;
		}

		//PUNTO B
		if (mill > 0) {
			cantlluv++;
		}

		// PUNTO C
		if (tmax <= 5) {
			frio++;
		}
		else {
			if (tmax <= 28) {
				templado++;
			}
			else {
				caluroso++;
			}
		}
	}

	// PUNTO A
	cout << "Punto A: " << endl;
	cout << "Dia: " << dmax << endl;
	cout << "Amplitud: " << atmax << endl;

	// PUNTO B
	porlluv = (float)cantlluv * 100 / CANTIDAD_DIAS;
	cout << "Punto B: " << endl;
	cout << "Porcentaje: " << porlluv << "%" << endl;

	// PUNTO C
	cout << "Punto C:" << endl;
	cout << "Frio: " << frio << endl;
	cout << "Templado: " << templado << endl;
	cout << "Caluroso: " << caluroso << endl;


	return 0;
}
