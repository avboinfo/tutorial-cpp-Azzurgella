#include <iostream>
#include <vector>
using namespace std;

int trovaMassimo(const vector<int>& vettore, int indice) {
    if (indice == vettore.size()) {
        return 0;
    }

    int massimoRestante = trovaMassimo(vettore, indice + 1);
    return max(vettore[indice], massimoRestante);
}

int main() {
    vector<int> numeri = {10, 5, 8, 15, 3, 20};
    int risultato = trovaMassimo(numeri, 0);
    cout << "Il massimo valore nel vettore è: " << risultato << endl;
    return 0;
}