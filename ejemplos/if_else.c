#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }
    printf("Además el número es ");
    if (numero > 0) {
        printf("positivo.\n");
    } else if (numero < 0) {
        printf("es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    if (numero)

    return 0;
}