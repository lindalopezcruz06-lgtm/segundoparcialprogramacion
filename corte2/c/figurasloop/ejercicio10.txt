#include <stdio.h>

int main() {
    int fila, columna, espacios;
    
    // Techo
    for (fila = 1; fila <= 5; fila++) {
        for (espacios = 1; espacios <= 5 - fila; espacios++) {
            printf(" ");
        }
        for (columna = 1; columna <= 2 * fila - 1; columna++) {
            printf("^");
        }
        printf("\n");
    }
    
    // Base de la casa (cuadrado hueco)
    for (fila = 1; fila <= 4; fila++) {
        for (columna = 1; columna <= 9; columna++) {
            if (columna == 1 || columna == 9 || fila == 4) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
