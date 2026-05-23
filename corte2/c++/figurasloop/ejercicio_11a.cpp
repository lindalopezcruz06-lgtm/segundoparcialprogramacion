#include <iostream>
using namespace std;

int main() {
    int fila, col;

    for(fila = 1; fila <= 3; fila++) {
        for(col = 1; col <= 3; col++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}
