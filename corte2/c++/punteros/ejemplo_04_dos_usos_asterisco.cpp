#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

int main(void) { /* Funcion principal del programa. */
    int x = 5; /* Variable entera con valor inicial 5. */

    int *p = &x; /* Declaracion de puntero: aqui el * forma parte de la declaracion. */

    *p = 40; /* Desreferenciacion: aqui el * accede al contenido apuntado por p. */

    cout << "x = " << x << endl; /* Muestra el valor final de x. */

    return 0; /* Finalizacion exitosa. */
}
