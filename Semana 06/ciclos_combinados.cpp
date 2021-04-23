#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int d, m, cd, mes, pv;
    float tr;
    // A
    int total_pasajes=0;
    // B
    float total;

    for(d=1; d<=5; d++){

        total = 0;
        cout << "Destino: ";
        cin >> cd;

        for(m=1; m<=4; m++){
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes: ";
            cin >> pv;
            cout << "Total: $";
            cin >> tr;
            total += tr;
            total_pasajes += pv;
        }
        cout << endl;
        cout << "Total recaudado: $" << fixed << setprecision(2) << total << endl;
    }
    cout << "Total de pasajes: " << total_pasajes << endl;
    return 0;
}
