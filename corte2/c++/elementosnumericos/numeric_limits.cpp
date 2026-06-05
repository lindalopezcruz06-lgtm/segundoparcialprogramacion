#include <iostream> // Permite imprimir en consola.
#include <limits>   // Incluye numeric_limits.
#include <cstdint>  // Incluye tipos de tamaño definido.
using namespace std; // Permite usar cout y endl directamente.

int main() { // Inicia la función principal.
    cout << "int min: " << numeric_limits<int>::min() << endl; // Menor int.
    cout << "int max: " << numeric_limits<int>::max() << endl; // Mayor int.
    cout << "uint8_t max: " << static_cast<int>(numeric_limits<uint8_t>::max()) << endl; // Mayor uint8_t.
    cout << "int16_t min: " << numeric_limits<int16_t>::min() << endl; // Menor int16_t.
    cout << "int16_t max: " << numeric_limits<int16_t>::max() << endl; // Mayor int16_t.
    return 0; // Finaliza el programa correctamente.
}

