#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, promedio;
    
    // Lectura secuencial de las tres calificaciones
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;
    
    // Calcula la media dividiendo de forma exacta entre 3.0
    promedio = (nota1 + nota2 + nota3) / 3.0;
    
    // Muestra el promedio final obtenido en pantalla
    cout << "El promedio final es: " << promedio << endl;
    
    return 0;
}

