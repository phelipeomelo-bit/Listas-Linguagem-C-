#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Digite o valor do raio: ";
    cin >> r;

    double area = M_PI * pow(r, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
