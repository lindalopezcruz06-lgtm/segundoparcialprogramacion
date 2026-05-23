#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

int main(void) { /* Funcion principal del programa. */
    int x = 25; /* Variable entera con valor inicial 25. */
    int *p = &x; /* p guarda la direccion de x. */

    cout << "x = " << x << endl; /* Muestra el valor directo de x. */
    cout << "*p = " << *p << endl; /* Muestra el valor encontrado en la direccion guardada en p. */

    *p = 99; /* Modifica x indirectamente mediante el puntero p. */

    cout << "x despues = " << x << endl; /* Muestra x despues de la modificacion indirecta. */

    return 0; /* Finalizacion exitosa. */
}
