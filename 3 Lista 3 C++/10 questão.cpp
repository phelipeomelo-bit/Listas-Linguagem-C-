#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5], produto = 0;
    cout << "Digite 5 números do primeiro vetor:\n";
    for(int i = 0; i < 5; i++) cin >> v1[i];
    cout << "Digite 5 números do segundo vetor:\n";
    for(int i = 0; i < 5; i++) cin >> v2[i];

    for(int i = 0; i < 5; i++)
        produto += v1[i] * v2[i];

    cout << "Produto escalar = " << produto << endl;
    return 0;
}
