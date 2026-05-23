#include <iostream>
using namespace std;

int main() {
    int fila, espacios, simbolos;
    int n = 7;

    // Mitad superior del rombo (7 filas)
    for (fila = 1; fila <= n; fila++) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }
        cout << endl;
    }

    // Mitad inferior del rombo (6 filas)
    for (fila = n - 1; fila >= 1; fila--) {
        for (espacios = 1; espacios <= n - fila; espacios++) {
            cout << " ";
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
