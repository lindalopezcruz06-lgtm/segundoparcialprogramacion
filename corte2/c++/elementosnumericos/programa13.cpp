#include <iostream>
#include <cstdint> // Necesario para int8_t
using namespace std;

int main() {
    int8_t numero = 127; // El valor maximo con signo en complemento a dos para 8 bits
    cout << "Valor inicial: " << static_cast<int>(numero) << endl;
    
    numero = numero + 1; // Produce desbordamiento y pasa al valor mas negativo (-128)
    cout << "Valor despues de sumar 1: " << static_cast<int>(numero) << endl;
    
    return 0;
}

