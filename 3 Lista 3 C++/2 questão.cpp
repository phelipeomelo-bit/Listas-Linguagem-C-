#include <iostream>
using namespace std;

int main() {
    int v[15];
    for(int i = 0; i < 15; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> v[i];
    }
    int maior = v[0], menor = v[0];
    for(int i = 1; i < 15; i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }
    cout << "Maior = " << maior << ", Menor = " << menor << endl;
    return 0;
}
