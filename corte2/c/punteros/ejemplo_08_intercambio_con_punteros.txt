#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definicion de NULL. */

void intercambiar(int *a, int *b) { /* a y b reciben direcciones de variables enteras. */
    if (a == NULL || b == NULL) { /* Verifica si alguna direccion no es valida. */
        return; /* Sale de la funcion sin hacer cambios. */
    }

    int temp = *a; /* Guarda el contenido apuntado por a. */
    *a = *b; /* Escribe en la direccion apuntada por a el contenido apuntado por b. */
    *b = temp; /* Escribe en la direccion apuntada por b el valor temporal. */
}

int main(void) { /* Funcion principal del programa. */
    int x = 10; /* Primera variable original. */
    int y = 20; /* Segunda variable original. */

    printf("Antes: x = %d, y = %d\n", x, y); /* Valores antes del intercambio. */

    intercambiar(&x, &y); /* Envia las direcciones de x y y. */

    printf("Despues: x = %d, y = %d\n", x, y); /* Ahora las variables originales
    cambiaron. */

    return 0; /* Finalizacion exitosa. */
}
