#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definicion de NULL. */

void cambiar(int *p) { /* p recibe una copia de una direccion. */
    if (p == NULL) { /* Verifica si la direccion recibida no es valida. */
        return; /* Sale de la funcion para evitar usar un puntero invalido. */
    }

    *p = 100; /* Escribe 100 en la variable ubicada en la direccion recibida. */
}

int main(void) { /* Funcion principal del programa. */
    int x = 5; /* Variable original. */

    printf("Antes: x = %d\n", x); /* Muestra x antes de llamar la funcion. */

    cambiar(&x); /* Envia la direccion de x. */

    printf("Despues: x = %d\n", x); /* x cambia porque la funcion escribio en su
    direccion. */

    return 0; /* Finalizacion exitosa. */
}
