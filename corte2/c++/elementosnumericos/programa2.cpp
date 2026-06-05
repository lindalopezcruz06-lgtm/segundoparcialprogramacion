#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Solicita y lee los dos numeros enteros desde el teclado
    cout << "Ingrese el primer número entero: ";
    cin >> a;
    cout << "Ingrese el segundo número entero: ";
    cin >> b;
    
    // Muestra los resultados de todas las operaciones aritmeticas básicas
    cout << "Suma: " << (a + b) << endl;
    cout << "Resta: " << (a - b) << endl;
    cout << "Multiplicación: " << (a * b) << endl;
    
    // Validacion para evitar la division e indefinicón por cero
    if (b != 0) {
        // Se usa static_cast para que la division muestre los decimales exactos
        cout << "División: " << (static_cast<double>(a) / b) << endl;
        cout << "Residuo (Módulo): " << (a % b) << endl;
    } else {
        cout << "Error: No se puede dividir entre cero." << endl;
    }
    
    return 0;
}
