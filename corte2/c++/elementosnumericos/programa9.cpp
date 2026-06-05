#include <iostream>
#include <cstdint> // Necesario para el tipo entero de 8 bits sin signo
using namespace std;

int main() {
    // uint8_t optimiza memoria (1 byte) y cubre el rango exacto de una señal PWM (0 a 255)
    uint8_t valor_pwm = 128; 
    
    // Al imprimir uint8_t en cout, se debe usar static_cast<int> para que se muestre como numero y no como caracter ASCII
    cout << "El valor actual de la señal PWM es: " << static_cast<int>(valor_pwm) << endl;
    
    return 0;
}

