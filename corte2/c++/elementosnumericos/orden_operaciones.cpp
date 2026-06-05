#include <iostream>
using namespace std;

int main() {
    // La multiplicacion (*) tiene mayor prioridad que la suma (+)
    double resultado1 = 5.0 + 3.0 * 2.0; // Evalua primero 3.0 * 2.0 = 6.0, luego suma 5.0
    
    // Los parentesis alteran el orden de evaluacion estandar
    double resultado2 = (5.0 + 3.0) * 2.0; // Evalua primero la suma dentro del parentesis = 8.0
    
    cout << "Resultado sin parentesis (5 + 3 * 2): " << resultado1 << endl; // Imprime 11
    cout << "Resultado con parentesis ((5 + 3) * 2): " << resultado2 << endl; // Imprime 16
    
    return 0; // Finaliza la ejecucion correctamente
}

