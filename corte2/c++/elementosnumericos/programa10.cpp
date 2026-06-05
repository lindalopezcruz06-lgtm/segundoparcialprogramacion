#include <iostream>
#include <cstdint> // Necesario para el tipo entero de 16 bits sin signo
using namespace std;

int main() {
    // uint16_t ocupa 2 bytes en memoria y maneja un rango sin signo de 0 a 65,535 pulsos
    uint16_t pulsos_encoder = 45230;
    
    // Imprime el valor acumulado de pulsos registrados por el sensor encoder
    cout << "Pulsos actuales del encoder: " << pulsos_encoder << endl;
    
    return 0;
}

