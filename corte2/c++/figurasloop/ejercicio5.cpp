#include <iostream>
using namespace std;

int main() {
    int fila, espacios, simbolos;

    for (fila = 1; fila <= 6; fila++) {
        for (espacios = 1; espacios <= 6 - fila; espacios++) {
            cout << " ";
        }
        for (simbolos = 1; simbolos <= 2 * fila - 1; simbolos++) {
            cout << "o";
        }
        cout << endl;
    }

    return 0;
}
