#include <stdio.h>

// Función que intercambia dos valores utilizando punteros
void intercambiar(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    // Llamada a la función para intercambiar los valores
    intercambiar(&num1, &num2);

    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
