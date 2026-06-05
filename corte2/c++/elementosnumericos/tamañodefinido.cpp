#include <iostream>
#include <cstdint> // Biblioteca estandar indispensable para usar enteros de tamano fijo
using namespace std;

int main() {
    int16_t entero_corto = -32000; // Entero con signo con un tamano garantizado de 16 bits (2 bytes)
    uint32_t contador_grande = 4000000000; // Entero sin signo garantizado de 32 bits (4 bytes)
    
    cout << "Valor con signo (16 bits): " << entero_corto << endl;
    cout << "Valor sin signo (32 bits): " << contador_grande << endl;
    cout << "Bytes de int16_t: " << sizeof(int16_t) << " bytes" << endl; // Comprueba que mide 2 bytes
    cout << "Bytes de uint32_t: " << sizeof(uint32_t) << " bytes" << endl; // Comprueba que mide 4 bytes
    
    return 0; // Termina el programa correctamente
}

