#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], c[3][3];
    cout << "Digite a matriz A (3x3):\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Digite a matriz B (3x3):\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> b[i][j];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    cout << "Matriz soma:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}
