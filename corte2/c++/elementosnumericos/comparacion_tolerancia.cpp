#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;
    double tolerancia = 1e-9;
    
    // Forma correcta usando el valor absoluto de la diferencia
    if (abs(a - b) < tolerancia) {
        cout << "Los numeros son iguales dentro de la tolerancia." << endl;
    } else {
        cout << "Los numeros son diferentes." << endl;
    }
    return 0;
}

