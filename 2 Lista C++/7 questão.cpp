#include <iostream>
using namespace std;

int main() {
    double d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    double maior = d1;
    if (d2 > maior) maior = d2;
    if (d3 > maior) maior = d3;
    cout << "Maior distancia = " << maior << endl;
    return 0;
}
