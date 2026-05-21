#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */

int main(void) { /* Funcion principal del programa. */
    int x = 25; /* Variable entera con valor inicial 25. */
    int *p = &x; /* p guarda la direccion de x. */

    printf("x = %d\n", x); /* Muestra el valor directo de x. */
    printf("&x = %p\n", (void *)&x); /* Muestra la direccion de x. */
    printf("p = %p\n", (void *)p); /* Muestra la direccion guardada en p. */
    printf("*p = %d\n", *p); /* Muestra el contenido ubicado en la direccion guardada en p. */

    return 0; /* Finalizacion exitosa del programa. */
}
