#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int pi_entero = static_cast<int>(pi); // Conversion explicita
    
    cout << "Double original: " << pi << endl;
    cout << "Entero truncado: " << pi_entero << endl;
    return 0;
}

