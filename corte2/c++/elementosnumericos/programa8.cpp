#include <iostream>
#include <cstdint> // Requerido de forma estandar para compilar uint8_t, uint16_t y uint32_t
using namespace std;

int main() {
    // El operador sizeof devuelve la cantidad exacta de bytes ocupados en memoria
    cout << "Tamaño de int: " << sizeof(int) << " bytes" << endl;
    cout << "Tamaño de float: " << sizeof(float) << " bytes" << endl;
    cout << "Tamaño de double: " << sizeof(double) << " bytes" << endl;
    cout << "Tamaño de char: " << sizeof(char) << " bytes" << endl;
    cout << "Tamaño de bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Tamaño de uint8_t: " << sizeof(uint8_t) << " bytes" << endl;
    cout << "Tamaño de int16_t: " << sizeof(int16_t) << " bytes" << endl;
    cout << "Tamaño de uint32_t: " << sizeof(uint32_t) << " bytes" << endl;
    
    return 0;
}

