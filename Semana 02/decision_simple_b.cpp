#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingresar número: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Es positivo.";
    }
    else
    {
        if (num < 0)
        {
            cout << "Es negativo.";
        }
        else
        {
            cout << "Es cero.";
        }
    }
    return 0;
}
