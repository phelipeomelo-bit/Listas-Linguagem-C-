#include <iostream>
using namespace std;

int main() {
    int m[4][4], num, cont = 0;
    cout << "Digite os elementos da matriz 4x4:\n";
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> m[i][j];

    cout << "Digite o número para contar: ";
    cin >> num;

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(m[i][j] == num)
                cont++;

    cout << "O número " << num << " aparece " << cont << " vezes.\n";
    return 0;
}
