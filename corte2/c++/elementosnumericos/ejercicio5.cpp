#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, promedio;
    cout << "Ingrese tres notas separadas por espacios: ";
    cin >> n1 >> n2 >> n3;
    
    promedio = (n1 + n2 + n3) / 3.0;
    cout << "El promedio final es: " << promedio << endl;
    return 0;
}

