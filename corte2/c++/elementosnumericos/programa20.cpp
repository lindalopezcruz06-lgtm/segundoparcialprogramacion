#include <iostream>
#include <cmath> // Biblioteca estandar indispensable para calculos matematicos avanzados
using namespace std;

int main() {
    double numero_negativo = -15.75;
    double valor_decimal = 4.3;
    
    cout << "sqrt(16.0)  [Raiz cuadrada]: " << sqrt(16.0) << endl;
    cout << "pow(2.0, 3) [Potencia 2^3]:   " << pow(2.0, 3.0) << endl;
    cout << "fabs(" << numero_negativo << ") [Valor absoluto]: " << fabs(numero_negativo) << endl;
    cout << "round(4.6)  [Redondeo al entero mas cercano]: " << round(4.6) << endl;
    cout << "floor(4.8)  [Truncar hacia abajo/suelo]: " << floor(4.8) << endl;
    cout << "ceil(4.1)   [Redondeo hacia arriba/techo]: " << ceil(4.1) << endl;
    
    return 0;
}

