#include <stdio.h>

int main() {
    int numeros[] = {10, -20, 30, 40, 50};

    printf("Elementos del arreglo:\n");
    for (size_t i = 0, sumaPositivos = 0; i < sizeof(numeros) / sizeof(numeros[0]); ++i) {
        printf("%d ", numeros[i]);
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
        }
        printf("La suma de positivos hasta ahora es: %zu \n", sumaPositivos);
    }
    printf("\n");
    return 0;
}





