#include <iostream>
#include <bitset> // Permite imprimir valores en formato binario facilmente
using namespace std;

int main() {
    // Usamos bitset de 8 bits para visualizar la cadena binaria completa
    cout << "0 en binario:   " << bitset<8>(0) << endl;
    cout << "1 en binario:   " << bitset<8>(1) << endl;
    cout << "5 en binario:   " << bitset<8>(5) << endl;
    cout << "127 en binario: " << bitset<8>(127) << endl;
    cout << "255 en binario: " << bitset<8>(255) << endl;
    
    return 0;
}

