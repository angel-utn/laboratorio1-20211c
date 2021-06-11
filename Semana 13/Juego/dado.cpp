#include <iostream>
using namespace std;
#include "rlutil.h"

void dibujarCuadrado(int posx, int posy, int tam) {
	for (int y = 1; y <= tam / 2; y++) {
		for (int x = 1; x <= tam; x++) {
			rlutil::locate(x + posx, y + posy);
			cout << "█";
			//cout << (char)219;
		}
	}
}

void dibujarDado(int posx, int posy, int num, int tam) {
	rlutil::setBackgroundColor(rlutil::DARKGREY);
	rlutil::setColor(rlutil::WHITE);
	rlutil::saveDefaultColor();

	rlutil::setColor(rlutil::RED);
	dibujarCuadrado(posx, posy, tam);

	rlutil::setBackgroundColor(rlutil::RED);
	rlutil::setColor(rlutil::WHITE);

	switch (num)
	{
	case 1:
		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 + 1);
		cout << "■";
		//cout << (char)254;
		break;

	case 2:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;


		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		break;

	case 3:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 + 1);
		cout << "■";
		//cout << (char)254;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		break;


	case 4:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		rlutil::locate(posx + tam / 4 + 1, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		break;

	case 5:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 + 1);
		cout << "■";
		//cout << (char)254;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		rlutil::locate(posx + tam / 4 + 1, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;
		break;


	case 6:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 / 4 + 1);
		cout << "▄";
		//cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		rlutil::locate(posx + tam / 4 + 1, posy + tam / 2 - tam / 4 / 4);
		cout << "▀";
		//cout << (char)223;

		break;

	default:
		break;
	}
	rlutil::resetColor();
	rlutil::setBackgroundColor(rlutil::DARKGREY);

	rlutil::setColor(rlutil::LIGHTRED);
	// sombra

	for (int y = posy + 2; y <= posy + tam / 2 + 1; y++) {
		rlutil::locate(posx + tam + 1, y);
		cout << "█";
		//cout << (char)219;
	}


	for (int x = posx + 2; x <= posx + tam + 1; x++) {
		rlutil::locate(x, posy + tam / 2 + 1);
		cout << "▀";
		//cout << (char)223;
	}

	rlutil::locate(posx + tam + 1, posy + 1);
	cout << "▄";
	//cout << (char)220;

	rlutil::locate(1, posy + tam/2 + 1);
	rlutil::resetColor();

}
