#include <iostream>
#include <cstdint> // Necesario para uint8_t
using namespace std;

int main() {
    uint8_t numero = 255; // El valor maximo que puede almacenar 8 bits sin signo
    cout << "Valor inicial: " << static_cast<int>(numero) << endl;
    
    numero = numero + 1; // Produce un desbordamiento (overflow) y vuelve al inicio del rango (0)
    cout << "Valor despues de sumar 1: " << static_cast<int>(numero) << endl;
    
    return 0;
}

