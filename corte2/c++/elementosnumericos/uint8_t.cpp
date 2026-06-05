#include <iostream>
#include <cstdint> // Necesario para la definicion de uint8_t
using namespace std;

int main() {
    uint8_t nivel_pwm = 128; // Variable entera de 8 bits sin signo (rango 0 a 255)
    
    // Alerta: Si se imprime directamente, cout lo interpreta como un caracter ASCII
    cout << "Impresion directa sin conversion: " << nivel_pwm << endl; 
    
    // static_cast<int> fuerza al sistema a procesarlo e imprimirlo como un numero entero
    cout << "Impresion correcta usando static_cast: " << static_cast<int>(nivel_pwm) << endl;
    
    return 0; // Finaliza la ejecucion
}
