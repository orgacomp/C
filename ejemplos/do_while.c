#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Ingrese un número positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    printf("Ha ingresado el número positivo: %d\n", numero);

    return 0;
}