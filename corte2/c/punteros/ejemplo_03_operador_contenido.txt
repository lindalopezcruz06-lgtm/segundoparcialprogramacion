#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Funcion principal del programa. */
    int x = 25; /* Variable entera con valor inicial 25. */
    int *p = &x; /* p guarda la direccion de x. */

    printf("x = %d\n", x); /* Muestra el valor directo de x. */
    printf("*p = %d\n", *p); /* Muestra el valor encontrado en la direccion guardada en p.*/

    *p = 99; /* Modifica x indirectamente mediante el puntero p. */

    printf("x despues = %d\n", x); /* Muestra x despues de la modificacion indirecta. */

    return 0; /* Finalizacion exitosa. */
}
