#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int entrada; // Usamos un entero temporal para leer la entrada sin problemas de caracteres
    uint8_t valor_final;
    
    cout << "Ingrese un valor entre 0 y 255: ";
    cin >> entrada;
    
    // Estructura de control para validar el rango numerico exigido
    if (entrada >= 0 && entrada <= 255) {
        valor_final = static_cast<uint8_t>(entrada); // Conversion segura despues de validar
        cout << "Valor almacenado con exito: " << static_cast<int>(valor_final) << endl;
    } else {
        cout << "Error: El valor ingresado esta fuera del rango permitido (0 a 255)." << endl;
    }
    
    return 0;
}

