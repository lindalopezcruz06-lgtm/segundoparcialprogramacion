#include <iostream>
#include <cstdint>
#include <bitset>
using namespace std;

int main() {
    uint8_t x = 255;
    int8_t y = -1;
    
    // Convertimos ambos a bitset de 8 bits para comparar sus cadenas binarias reales
    bitset<8> bits_x(x);
    bitset<8> bits_y(y);
    
    cout << "Bits de x (uint8_t = 255): " << bits_x << endl;
    cout << "Bits de y (int8_t = -1):   " << bits_y << endl;
    
    if (bits_x == bits_y) {
        cout << "Resultado: Tienen exactamente la misma secuencia de bits (11111111)." << endl;
    } else {
        cout << "Resultado: Los bits son diferentes." << endl;
    }
    
    return 0;
}

