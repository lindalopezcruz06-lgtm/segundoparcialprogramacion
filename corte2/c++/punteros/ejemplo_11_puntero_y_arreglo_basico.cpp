#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

int main() { /* Funcion principal del programa. */
    int datos[3] = {10, 20, 30}; /* Arreglo de tres enteros. */
    int *p = datos; /* p apunta al primer elemento del arreglo. */

    cout << "datos[0] = " << datos[0] << endl; /* Acceso mediante indice. */
    cout << "*p = " << *p << endl; /* Acceso mediante puntero. */
    cout << "*(p + 1) = " << *(p + 1) << endl; /* Acceso al segundo elemento. */
    cout << "*(p + 2) = " << *(p + 2) << endl; /* Acceso al tercer elemento. */

    return 0; /* Finalizacion exitosa. */
}
