#include <stdio.h>
int main() {
    int fila = 1, col;
    do {
        col = 1;
        do {
            printf("X");
            col++;
        } while(col <= 3);
        printf("\n");
        fila++;
    } while(fila <= 3);
    return 0;
}
