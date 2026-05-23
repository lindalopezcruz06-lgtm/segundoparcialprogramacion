#include <iostream>
using namespace std;

int main() {
    int fila, columna;

    for (fila = 1; fila <= 3; fila++) {
        for (columna = 1; columna <= 10; columna++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
