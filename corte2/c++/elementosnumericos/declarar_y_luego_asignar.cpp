#include <iostream>
using namespace std;

int main() {
    int temperatura; // Solo declaracion (contiene basura de memoria)
    temperatura = 24; // Asignacion posterior
    
    cout << "Temperatura registrada: " << temperatura << endl;
    return 0;
}

