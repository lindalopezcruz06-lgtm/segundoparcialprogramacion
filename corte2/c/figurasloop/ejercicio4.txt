#include <stdio.h>

    int main() {
        int fila = 6;
        int columna;
        while (fila >= 1) {
              columna = 1;
              while (columna <= fila) {
                  printf("X");
                  columna++;
              }
              printf("\n");
              fila--;
       }
       return 0;

}
