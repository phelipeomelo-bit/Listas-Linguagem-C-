#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char tipo;
    double temp;
    cin >> tipo >> temp;

    cout << fixed << setprecision(2);
    if (tipo == 'C' || tipo == 'c')
        cout << "Temperatura em Fahrenheit = " << (temp * 9 / 5) + 32 << endl;
    else if (tipo == 'F' || tipo == 'f')
        cout << "Temperatura em Celsius = " << 5 * (temp - 32) / 9 << endl;
    else
        cout << "Tipo invalido!" << endl;

    return 0;
}
