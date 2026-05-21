#include <stdio.h>

int main() {
    int fila = 5;
    int espacios, simbolos;
    
    // Parte de arriba (Pirámide invertida)
    while (fila >= 1) {
        espacios = 5 - fila;
        while (espacios > 0) {
            printf(" ");
            espacios--;
        }
        simbolos = 2 * fila - 1;
        while (simbolos > 0) {
            printf("@");
            simbolos--;
        }
        printf("\n");
        fila--;
    }
    
    // Parte de abajo (Pirámide normal, empezamos en fila 2 para no repetir el centro)
    fila = 2;
    while (fila <= 5) {
        espacios = 5 - fila;
        while (espacios > 0) {
            printf(" ");
            espacios--;
        }
        simbolos = 2 * fila - 1;
        while (simbolos > 0) {
            printf("@");
            simbolos--;
        }
        printf("\n");
        fila++;
    }
    return 0;
}
