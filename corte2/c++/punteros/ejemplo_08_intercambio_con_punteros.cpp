#include <iostream> /* Incluye la biblioteca necesaria para cout. */
using namespace std;

void intercambiar(int *a, int *b) { /* a y b reciben direcciones de variables enteras. */
    if (a == nullptr || b == nullptr) { /* Verifica si alguna direccion no es valida. */
        return; /* Sale de la funcion sin hacer cambios. */
    }

    int temp = *a; /* Guarda el contenido apuntado por a. */
    *a = *b; /* Escribe en la direccion apuntada por a el contenido apuntado por b. */
    *b = temp; /* Escribe en la direccion apuntada por b el valor temporal. */
}

int main() { /* Funcion principal del programa. */
    int x = 10; /* Primera variable original. */
    int y = 20; /* Segunda variable original. */

    cout << "Antes: x = " << x << ", y = " << y << endl; /* Valores antes del intercambio. */

    intercambiar(&x, &y); /* Envia las direcciones de x y y. */

    cout << "Despues: x = " << x << ", y = " << y << endl; /* Ahora las variables originales cambiaron. */

    return 0; /* Finalizacion exitosa. */
}
