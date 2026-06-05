#include <iostream>
#include <bitset> // Permite visualizar la representacion de bits de numeros negativos
using namespace std;

int main() {
    // Los numeros negativos se almacenan internamente usando complemento a dos
    cout << "-1 en binario:   " << bitset<8>(-1) << endl;
    cout << "-2 en binario:   " << bitset<8>(-2) << endl;
    cout << "-5 en binario:   " << bitset<8>(-5) << endl;
    cout << "-128 en binario: " << bitset<8>(-128) << endl;
    
    return 0;
}

