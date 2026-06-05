#include <iostream>
using namespace std;

int main() {
    double radio, area;
    const double PI = 3.14159265;
    
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    area = PI * radio * radio;
    cout << "El area es: " << area << endl;
    return 0;
}

