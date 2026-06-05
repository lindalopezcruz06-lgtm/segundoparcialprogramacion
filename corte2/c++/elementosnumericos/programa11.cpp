#include <iostream>
#include <cstdint> // Necesario para el tipo entero de 32 bits sin signo
using namespace std;

int main() {
    // uint32_t ocupa 4 bytes y permite contar de 0 a 4,294,967,295 milisegundos (aprox. 49.7 dias de uptime continuo)
    uint32_t milisegundos_sistema = 3600000; // Representa 1 hora de funcionamiento en milisegundos
    
    // Imprime el tiempo de ejecucion total acumulado en el contador del sistema
    cout << "Tiempo de funcionamiento del sistema: " << milisegundos_sistema << " ms" << endl;
    
    return 0;
}

