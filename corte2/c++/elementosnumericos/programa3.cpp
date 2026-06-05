#include <iostream>
using namespace std;

int main() {
    double base, altura, area;
    
    // Lectura de los datos de entrada por consola
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;
    
    // Aplica la formula matematica estandar (Base * Altura) / 2
    area = (base * altura) / 2.0;
    
    // Muestra el area calculada con precision decimal
    cout << "El área del triángulo es: " << area << endl;
    
    return 0;
}

