#include <iostream>
using namespace std;

int main() {
    int fila, columna;

    for (fila = 1; fila <= 7; fila++) {
        for (columna = 1; columna <= fila; columna++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
