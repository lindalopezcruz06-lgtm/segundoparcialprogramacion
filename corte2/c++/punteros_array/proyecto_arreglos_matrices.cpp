#include <iostream>

/* Leemos los datos del arreglo dinamico. */
void leerArreglo(int *datos, int n) {

    int i;

    /* Verificamos que el puntero sea valido. */
    if (datos == nullptr) {
        return;
    }

    /* Solicitamos cada elemento. */
    for (i = 0; i < n; i++) {
        std::cout << "Ingrese datos[" << i << "]: ";
        std::cin >> datos[i];
    }
}

/* Mostramos todos los elementos del arreglo. */
void mostrarArreglo(int *datos, int n) {

    int i;

    /* Verificamos que el puntero sea valido. */
    if (datos == nullptr) {
        return;
    }

    std::cout << "Arreglo: ";

    for (i = 0; i < n; i++) {
        std::cout << datos[i] << " ";
    }

    std::cout << std::endl;
}

/* Analizamos el arreglo usando parametros de salida. */
void analizarArreglo(int *datos, int n, int *suma, int *mayor, int *menor) {

    int i;

    /* Verificamos direcciones. */
    if (datos == nullptr || suma == nullptr || mayor == nullptr || menor == nullptr) {
        return;
    }

    *suma = 0;
    *mayor = datos[0];
    *menor = datos[0];

    for (i = 0; i < n; i++) {

        *suma = *suma + datos[i];

        if (datos[i] > *mayor) {
            *mayor = datos[i];
        }

        if (datos[i] < *menor) {
            *menor = datos[i];
        }
    }
}

/* Leemos la matriz dinamica lineal. */
void leerMatriz(int *matriz, int filas, int columnas) {

    int i;
    int j;

    /* Verificamos puntero valido. */
    if (matriz == nullptr) {
        return;
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            std::cout << "Ingrese m[" << i << "][" << j << "]: ";
            std::cin >> matriz[i * columnas + j];
        }
    }
}

/* Mostramos la matriz. */
void mostrarMatriz(int *matriz, int filas, int columnas) {

    int i;
    int j;

    /* Verificamos puntero valido. */
    if (matriz == nullptr) {
        return;
    }

    std::cout << "Matriz:" << std::endl;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            std::cout << matriz[i * columnas + j] << " ";
        }

        std::cout << std::endl;
    }
}

/* Sumamos todos los elementos de la matriz. */
int sumarMatriz(int *matriz, int filas, int columnas) {

    int i;
    int j;
    int suma = 0;

    /* Verificamos puntero valido. */
    if (matriz == nullptr) {
        return 0;
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            suma = suma + matriz[i * columnas + j];
        }
    }

    return suma;
}

int main() {

    /* Variables de tamano. */
    int n;
    int filas;
    int columnas;

    /* Punteros dinamicos. */
    int *datos = nullptr;
    int *matriz = nullptr;

    /* Variables de salida. */
    int suma;
    int mayor;
    int menor;

    /* Solicitamos cantidad del arreglo. */
    std::cout << "Cantidad de datos del arreglo: ";
    std::cin >> n;

    /* Reservamos memoria dinamica. */
    datos = new int[n];

    /* Trabajamos con el arreglo. */
    leerArreglo(datos, n);

    mostrarArreglo(datos, n);

    analizarArreglo(datos, n, &suma, &mayor, &menor);

    std::cout << "Suma = " << suma << std::endl;
    std::cout << "Mayor = " << mayor << std::endl;
    std::cout << "Menor = " << menor << std::endl;

    /* Solicitamos dimensiones de la matriz. */
    std::cout << "Filas de la matriz: ";
    std::cin >> filas;

    std::cout << "Columnas de la matriz: ";
    std::cin >> columnas;

    /* Reservamos memoria dinamica para la matriz. */
    matriz = new int[filas * columnas];

    /* Trabajamos con la matriz. */
    leerMatriz(matriz, filas, columnas);

    mostrarMatriz(matriz, filas, columnas);

    std::cout << "Suma de la matriz = " << sumarMatriz(matriz, filas, columnas) << std::endl;

    /* Liberamos memoria del arreglo. */
    delete[] datos;
    datos = nullptr;

    /* Liberamos memoria de la matriz. */
    delete[] matriz;
    matriz = nullptr;

    std::cout << "Memoria liberada correctamente." << std::endl;

    return 0;
}
