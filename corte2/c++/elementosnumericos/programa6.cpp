#include <iostream>
using namespace std;

int main() {
    int edad;
    
    // Solicita la edad actual del usuario
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    // Estructura de decision para verificar si es igual o mayor a 18 años
    if (edad >= 18) {
        cout << "La persona es MAYOR de edad." << endl;
    } else {
        cout << "La persona es MENOR de edad." << endl;
    }
    
    return 0;
}

