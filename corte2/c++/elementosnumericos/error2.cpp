#include <iostream>
using namespace std;

int main() {
    int numerador = 10;
    int denominador = 0;
    
    if (denominador == 0) {
        cout << "Error: No se puede dividir entre cero de forma segura." << endl;
    } else {
        cout << "Resultado: " << (numerador / denominador) << endl;
    }
    return 0;
}

