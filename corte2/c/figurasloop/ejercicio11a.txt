#include <stdio.h>
int main() {
    int fila, col;
    for(fila = 1; fila <= 3; fila++) {
        for(col = 1; col <= 3; col++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
