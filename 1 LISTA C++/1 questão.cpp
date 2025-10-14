#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valorMetro, area, preco;
    cout << "Largura do terreno: ";
    cin >> largura;
    cout << "Comprimento do terreno: ";
    cin >> comprimento;
    cout << "Valor do metro quadrado: ";
    cin >> valorMetro;

    area = largura * comprimento;
    preco = area * valorMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << preco << endl;
    return 0;
}
