#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definicion de NULL. */

int main(void) { /* Funcion principal del programa. */
    int *p = NULL; /* El puntero se inicializa en NULL porque aun no apunta a un int. */

    if (p != NULL) { /* Solo se desreferencia si apunta a una direccion valida. */
        printf("Valor = %d\n", *p);
    } else {
        printf("p no apunta a una direccion valida.\n");
    }

    return 0; /* Finalizacion exitosa. */
}
