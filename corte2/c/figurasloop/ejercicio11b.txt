#include <stdio.h>
int main() {
    int fila = 1, col;
    while(fila <= 3) {
        col = 1;
        while(col <= 3) {
            printf("X");
            col++;
        }
        printf("\n");
        fila++;
    }
    return 0;
}
