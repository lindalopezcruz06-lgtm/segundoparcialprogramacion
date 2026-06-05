#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, aux;
    cout << "Antes: a = " << a << ", b = " << b << endl;
    
    aux = a;
    a = b;
    b = aux;
    
    cout << "Despues: a = " << a << ", b = " << b << endl;
    return 0;
}

