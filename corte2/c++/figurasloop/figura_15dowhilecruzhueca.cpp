#include <iostream>
using namespace std;

int main() {
    int fila = 1;
    int columna;
    int n = 9;
    int centro = 5;

    do {
        columna = 1;
        do {
            if (fila == centro || columna == centro) {
                cout << "+";
            } else {
                cout << " ";
            }
            columna++;
        } while (columna <= n);

        cout << endl;
        fila++;
    } while (fila <= n);

    return 0;
}
