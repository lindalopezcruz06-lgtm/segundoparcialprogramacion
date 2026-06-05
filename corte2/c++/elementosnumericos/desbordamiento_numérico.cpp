#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint8_t numero = 255;
    cout << "Valor inicial: " << static_cast<int>(numero) << endl;
    
    numero = numero + 1; // Produce desbordamiento (overflow)
    cout << "Luego de sumar 1 (Desbordamiento): " << static_cast<int>(numero) << endl;
    return 0;
}

