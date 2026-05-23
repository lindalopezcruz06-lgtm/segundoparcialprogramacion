#include <iostream>
using namespace std;

int main() {
    int fila = 6;
    int columna;

    while (fila >= 1) {
        columna = 1;
        while (columna <= fila) {
            cout << "X";
            columna++;
        }
        cout << endl;
        fila--;
    }

    return 0;
}
