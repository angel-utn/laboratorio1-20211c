/*
    Un almacén otorga un descuento del 10% a los clientes que hayan
    gastado más de $5000 en una compra.
    Dados el precio de un artículo y las unidades vendidas en una compra.
    Calcular el importe de la venta.
*/
#include <iostream>
using namespace std;

int main(){
    int unidades;
    float pu, subtotal , importe;

    cout << "Ingresar unidades vendidas: ";
    cin >> unidades;
    cout << "Ingresar precio unitario: $";
    cin >> pu;

    subtotal = pu * unidades;

    if (subtotal > 5000){
        /// Aplicar 10% dto
        cout << "Felicitaciones, se aplicó un descuento." << endl;
        cout << "Subtotal $ " << subtotal << endl;
        importe = subtotal * 0.9;
    }
    else{
        importe = subtotal;
    }

    cout << "Importe de la venta $ " << importe;
    return 0;
}
