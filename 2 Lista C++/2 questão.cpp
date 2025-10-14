#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0 || a == 0)
        cout << "Esta equacao nao possui raizes reais" << endl;
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
    return 0;
}
