#include <iostream>
using namespace std;

int main() {
    int fila = 1, col;

    do {
        col = 1;
        do {
            cout << "X";
            col++;
        } while(col <= 3);

        cout << endl;
        fila++;
    } while(fila <= 3);

    return 0;
}
