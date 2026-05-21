#include <stdio.h> /* Incluye printf y scanf. */
#include <stddef.h> /* Incluye la definicion de NULL. */

void duplicar(int *p) { /* Recibe la direccion de un entero. */
    if (p != NULL) { /* Verifica que el puntero sea valido. */
        *p = (*p) * 2; /* Duplica el valor almacenado en la direccion apuntada. */
    }
}

void intercambiar(int *a, int *b) { /* Recibe dos direcciones de enteros. */
    if (a == NULL || b == NULL) { /* Verifica que ambas direcciones sean validas. */
        return; /* Sale si alguna direccion no es valida. */
    }

    int temp = *a; /* Guarda temporalmente el contenido apuntado por a. */
    *a = *b; /* Copia en a el contenido apuntado por b. */
    *b = temp; /* Copia en b el valor temporal. */
}

void analizarNumeros(int a, int b, int c, int *suma, int *mayor, int *menor) {
    if (suma == NULL || mayor == NULL || menor == NULL) { /* Verifica direcciones. */
        return; /* Sale si alguna direccion no es valida. */
    }

    *suma = a + b + c; /* Escribe la suma en la direccion recibida. */

    *mayor = a; /* Supone inicialmente que a es el mayor. */
    if (b > *mayor) { /* Compara b. */
        *mayor = b; /* Actualiza el mayor. */
    }
    if (c > *mayor) { /* Compara c. */
        *mayor = c; /* Actualiza el mayor. */
    }

    *menor = a; /* Supone inicialmente que a es el menor. */
    if (b < *menor) { /* Compara b. */
        *menor = b; /* Actualiza el menor. */
    }
    if (c < *menor) { /* Compara c. */
        *menor = c; /* Actualiza el menor. */
    }
}

int main(void) { /* Funcion principal del programa. */
    int x = 10; /* Primera variable de trabajo. */
    int y = 20; /* Segunda variable de trabajo. */
    int z = 5; /* Tercera variable de trabajo. */

    int *px = &x; /* px guarda la direccion de x. */

    int suma; /* Variable para recibir la suma. */
    int mayor; /* Variable para recibir el mayor. */
    int menor; /* Variable para recibir el menor. */
    int opcion; /* Opcion seleccionada por el usuario. */

    do { /* Ciclo principal del menu. */
        printf("\n========== MENU CORTO DE PUNTEROS ==========\n");
        printf("1. Mostrar x, &x, px y *px\n");
        printf("2. Duplicar x usando el puntero px\n");
        printf("3. Intercambiar x y y usando punteros\n");
        printf("4. Analizar x, y, z usando punteros de salida\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf(" %d", &opcion); /* Lee la opcion. */

        switch (opcion) { /* Decide que accion ejecutar. */
            case 1:
                printf("x = %d\n", x);
                printf("&x = %p\n", (void *)&x);
                printf("px = %p\n", (void *)px);
                printf("*px = %d\n", *px);
                break;

            case 2:
                printf("Antes: x = %d\n", x);
                duplicar(px); /* Modifica x usando su direccion. */
                printf("Despues: x = %d\n", x);
                break;

            case 3:
                printf("Antes: x = %d, y = %d\n", x, y);
                intercambiar(&x, &y); /* Envia direcciones de x y y. */
                printf("Despues: x = %d, y = %d\n", x, y);
                break;

            case 4:
                analizarNumeros(x, y, z, &suma, &mayor, &menor);
                printf("Suma = %d\n", suma);
                printf("Mayor = %d\n", mayor);
                printf("Menor = %d\n", menor);
                break;
            case 0:
                printf("Fin del programa.\n");
                break;
            default:
               printf("Opcion no valida.\n");
               break;
       }
   } while (opcion != 0); /* Repite mientras no se seleccione salir. */

   return 0; /* Finalizacion exitosa. */
}
