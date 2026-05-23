#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

int sumar(int a, int b) { /* Recibe dos enteros como entrada. */
    return a + b; /* Devuelve directamente un solo resultado. */
}

int main() { /* Funcion principal del programa. */
    int resultado = sumar(4, 7); /* Llama la funcion y guarda el valor retornado. */

    cout << "Resultado = " << resultado << endl; /* Muestra el resultado. */

    return 0; /* Finalizacion exitosa. */
}
