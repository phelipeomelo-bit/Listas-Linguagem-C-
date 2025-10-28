#include <iostream>
using namespace std;

int main() {
    int v[10], num;
    for(int i = 0; i < 10; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> v[i];
    }
    cout << "Digite um número para buscar: ";
    cin >> num;
    bool encontrado = false;
    for(int i = 0; i < 10; i++) {
        if(v[i] == num) {
            encontrado = true;
            break;
        }
    }
    if(encontrado) cout << "Número encontrado no vetor!" << endl;
    else cout << "Número NÃO encontrado." << endl;
    return 0;
}
