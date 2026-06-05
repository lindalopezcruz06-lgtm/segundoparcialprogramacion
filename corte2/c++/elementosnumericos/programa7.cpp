#include <iostream>
using namespace std;

int main() {
    int numero;
    
    // Captura el numero entero a evaluar
    cout << "Ingrese un número entero: ";
    cin >> numero;
    
    // Si el residuo de dividir entre 2 es cero, el numero es par
    if (numero % 2 == 0) {
        cout << "El número " << numero << " es PAR." << endl;
    } else {
        cout << "El número " << numero << " es IMPAR." << endl;
    }
    
    return 0;
}
