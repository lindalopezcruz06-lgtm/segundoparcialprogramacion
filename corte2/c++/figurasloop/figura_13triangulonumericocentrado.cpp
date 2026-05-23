#include <iostream>
using namespace std;

int main() {
    int fila, espacios, numero;
    int n = 5;

    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }

        for (numero = 1; numero <= fila; numero++) {
            cout << " " << numero << " ";
        }

        for (numero = fila - 1; numero >= 1; numero--) {
            cout << " " << numero << " ";
        }

        cout << endl;
    }

    return 0;
}
