#include <iostream>
#include <cmath> // Necesario para usar fabs() [valor absoluto]
using namespace std;

int main() {
    double a = 0.1 + 0.2; // En binario esto acumula un pequeno residuo periodico
    double b = 0.3;
    double tolerancia = 1e-9; // Definimos nuestro margen maximo de error aceptable
    
    // Al trabajar con flotantes, nunca se debe comparar directamente con ==
    if (fabs(a - b) < tolerancia) {
        cout << "Los numeros son virtualmente IGUALES bajo la tolerancia establecida." << endl;
    } else {
        cout << "Los numeros son diferentes." << endl;
    }
    
    return 0;
}

