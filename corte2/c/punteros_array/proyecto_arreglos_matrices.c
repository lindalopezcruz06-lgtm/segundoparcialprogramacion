#include <stdio.h>
#include <stdlib.h>

/* Leemos los datos del arreglo dinamico. */
void leerArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;

    /* Verificamos que el puntero sea valido. */
    if (datos == NULL) {
        return;
    }

    /* Solicitamos cada elemento del arreglo. */
    for (i = 0; i < n; i++) {
        printf("Ingrese datos[%d]: ", i);
        scanf("%d", &datos[i]);
    }
}

/* Mostramos todos los elementos del arreglo. */
void mostrarArreglo(int *datos, int n) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;

    /* Verificamos que el puntero sea valido. */
    if (datos == NULL) {
        return;
    }

    /* Mostramos el arreglo completo. */
    printf("Arreglo: ");

    for (i = 0; i < n; i++) {
        printf("%d ", datos[i]);
    }

    printf("\n");
}

/* Calculamos suma, mayor y menor usando parametros de salida. */
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {
    /* i sera el indice usado para recorrer el arreglo. */
    int i;

    /* Verificamos que todas las direcciones sean validas. */
    if (datos == NULL || suma == NULL || mayor == NULL || menor == NULL) {
        return;
    }

    /* Inicializamos resultados. */
    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    /* Recorremos el arreglo completo. */
    for (i = 0; i < n; i++) {

        /* Acumulamos suma. */
        *suma = *suma + datos[i];

        /* Buscamos mayor. */
        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }

        /* Buscamos menor. */
        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

/* Leemos los datos de la matriz dinamica lineal. */
void leerMatriz(int *matriz, int filas, int columnas) {
    /* i recorrera filas y j columnas. */
    int i;
    int j;

    /* Verificamos que el puntero sea valido. */
    if (matriz == NULL) {
        return;
    }

    /* Solicitamos cada elemento de la matriz. */
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese m[%d][%d]: ", i, j);
            scanf("%d", &matriz[i * columnas + j]);
        }
    }
}

/* Mostramos la matriz como tabla. */
void mostrarMatriz(int *matriz, int filas, int columnas) {
    /* i recorrera filas y j columnas. */
    int i;
    int j;

    /* Verificamos que el puntero sea valido. */
    if (matriz == NULL) {
        return;
    }

    /* Mostramos la matriz. */
    printf("Matriz:\n");

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i * columnas + j]);
        }
        printf("\n");
    }
}

/* Sumamos todos los elementos de la matriz. */
int sumarMatriz(int *matriz, int filas, int columnas) {
    /* i recorrera filas y j columnas. */
    int i;
    int j;

    /* suma acumulara el resultado final. */
    int suma = 0;

    /* Verificamos que el puntero sea valido. */
    if (matriz == NULL) {
        return 0;
    }

    /* Recorremos toda la matriz. */
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            suma = suma + matriz[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    /* Variables para tamanos. */
    int n;
    int filas;
    int columnas;

    /* Punteros para memoria dinamica. */
    int *datos = NULL;
    int *matriz = NULL;

    /* Variables donde se guardaran resultados. */
    int suma;
    int mayor;
    int menor;

    /* Solicitamos cantidad de elementos del arreglo. */
    printf("Cantidad de datos del arreglo: ");
    scanf("%d", &n);

    /* Reservamos memoria para el arreglo. */
    datos = malloc(n * sizeof(int));

    /* Verificamos reserva. */
    if (datos == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }

    /* Leemos, mostramos y analizamos el arreglo. */
    leerArreglo(datos, n);

    mostrarArreglo(datos, n);

    analizarArreglo(datos, n, &suma, &mayor, &menor);

    printf("Suma = %d\n", suma);
    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);

    /* Solicitamos filas y columnas. */
    printf("Filas de la matriz: ");
    scanf("%d", &filas);

    printf("Columnas de la matriz: ");
    scanf("%d", &columnas);

    /* Reservamos memoria para la matriz lineal. */
    matriz = malloc(filas * columnas * sizeof(int));

    /* Verificamos reserva. */
    if (matriz == NULL) {
        free(datos);
        datos = NULL;
        printf("No se pudo reservar memoria.\n");
        return 1;
    }

    /* Leemos y mostramos la matriz. */
    leerMatriz(matriz, filas, columnas);

    mostrarMatriz(matriz, filas, columnas);

    printf("Suma de la matriz = %d\n", sumarMatriz(matriz, filas, columnas));

    /* Liberamos memoria del arreglo. */
    free(datos);
    datos = NULL;

    /* Liberamos memoria de la matriz. */
    free(matriz);
    matriz = NULL;

    printf("Memoria liberada correctamente.\n");

    return 0;
}
