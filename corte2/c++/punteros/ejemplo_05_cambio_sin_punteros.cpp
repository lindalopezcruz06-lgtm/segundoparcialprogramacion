#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

void cambiar(int n) { /* n recibe una copia del valor enviado desde main. */
    n = 100; /* Se modifica la copia local, no la variable original. */

    cout << "Dentro de cambiar: n = " << n << endl; /* Muestra la copia modificada. */
}

int main(void) { /* Funcion principal del programa. */
    int x = 5; /* Variable original. */

    cout << "Antes: x = " << x << endl; /* Muestra x antes de llamar la funcion. */

    cambiar(x); /* Se envia el valor de x. La funcion recibe una copia. */

    cout << "Despues: x = " << x << endl; /* x no cambia porque solo se modifico la copia. */

    return 0; /* Finalizacion exitosa. */
}
