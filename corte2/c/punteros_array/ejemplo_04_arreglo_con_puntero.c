 #include <stdio.h>

int main() {
    /* Declaramos un entero de cinco enteros. */
    int datos[5] = {8, 3, 15, 6, 10}

    /* p apunta al primer elemento del arreglo.*/
    int *p = datos;

    /* i sera l indice usado para recorrer el arreglo. */
    int i;

    /* Recorremos el arreglo usando aritmetica de punteros. */
    for (i = 0; i < 5; i++) {
        /* *(p + i) accede al elemnto ubicado i posiciones despues de p. */
        printf("Elemento %d = %d\n", i, *(p + i);
    }

    return 0;
}
