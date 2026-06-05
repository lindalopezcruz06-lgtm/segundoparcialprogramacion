#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Ingrese grados Celsius: ";
    cin >> celsius;
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "Equivale a: " << fahrenheit << " F" << endl;
    return 0;
}

