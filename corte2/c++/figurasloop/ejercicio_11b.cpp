#include <iostream>
using namespace std;

int main() {
    int fila = 1, col;

    while(fila <= 3) {
        col = 1;
        while(col <= 3) {
            cout << "X";
            col++;
        }
        cout << endl;
        fila++;
    }

    return 0;
}
