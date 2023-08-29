#include <stdio.h>

int main() {
    int numero = 1;

    printf("Números pares del 1 al 10:\n");
    while (numero <= 10) {
        if (numero % 2 == 0) {
            printf("%d ", numero);
        }
        numero++;
    }
    printf("\n");

    return 0;
}