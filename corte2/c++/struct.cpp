#include <iostream> // Permite usar cout .
using namespace std; // Evita escribir std :: antes de cout .

struct Punto {
    int x; // Coordenada x del punto .
    int y; // Coordenada y del punto .
    
    void mostrar() { // Funcion miembro de la estructura .
        cout << "(" << x << ", " << y << ")" << endl; // Imprime el punto .
    }
};

int main() {
    Punto p; // Crea una variable llamada p de tipo Punto .
    p.x = 3; // Asigna el valor 3 al campo x.
    p.y = 5; // Asigna el valor 5 al campo y.
    p.mostrar(); // Llama a la funcion mostrar .
    return 0; // Finaliza correctamente el programa .
}


