#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    
    // Lee el valor de la temperatura en escala Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    
    // Realiza la conversion aplicando la equivalencia matematica con punto decimal (9.0 / 5.0)
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    // Imprime la temperatura equivalente en escala Fahrenheit
    cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
    
    return 0;
}

