#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, qtd;
    cin >> codigo >> qtd;

    double preco;
    if (codigo == 1) preco = 5.00;
    else if (codigo == 2) preco = 3.50;
    else if (codigo == 3) preco = 4.80;
    else if (codigo == 4) preco = 8.90;
    else preco = 7.32;

    double total = preco * qtd;
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;
    return 0;
}
