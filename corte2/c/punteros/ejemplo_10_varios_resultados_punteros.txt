#include <stdio.h> /* Incluye la biblioteca necesaria para printf. */
#include <stddef.h> /* Incluye la definicion de NULL. */

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == NULL || mayor == NULL || menor == NULL) { /* Verifica direcciones. */
        return; /* Sale si alguna direccion no es valida. */
    }

    *suma = a + b + c; /* Escribe la suma en la direccion recibida. */

    *mayor = a; /* Supone inicialmente que a es el mayor. */
    if (b > *mayor) { /* Compara b con el mayor actual. */
        *mayor = b; /* Actualiza el mayor si b es mas grande. */
    }
    if (c > *mayor) { /* Compara c con el mayor actual. */
        *mayor = c; /* Actualiza el mayor si c es mas grande. */
    }

    *menor = a; /* Supone inicialmente que a es el menor. */
    if (b < *menor) { /* Compara b con el menor actual. */
        *menor = b; /* Actualiza el menor si b es mas pequeno. */
    }
    if (c < *menor) { /* Compara c con el menor actual. */
        *menor = c; /* Actualiza el menor si c es mas pequeno. */
    }
}

int main(void) { /* Funcion principal del programa. */
    int x = 8; /* Primer dato de entrada. */
    int y = 3; /* Segundo dato de entrada. */
    int z = 15; /* Tercer dato de entrada. */

    int suma; /* Variable donde se escribira la suma. */
    int mayor; /* Variable donde se escribira el mayor. */
    int menor; /* Variable donde se escribira el menor. */

    analizarNumeros(x, y, z, &suma, &mayor, &menor); /* Envia valores y direcciones. */

    printf("Suma = %d\n", suma); /* Muestra la suma. */
    printf("Mayor = %d\n", mayor); /* Muestra el mayor. */
    printf("Menor = %d\n", menor); /* Muestra el menor. */

    return 0; /* Finalizacion exitosa. */
}
