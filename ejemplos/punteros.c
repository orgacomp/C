#include <stdio.h>

int main() {
    int numero = 42; // Variable entera
    int* puntero;    // Puntero a un entero

    puntero = &numero; // Asignamos la dirección de 'numero' al puntero

    printf("Valor de 'numero': %d\n", numero);
    printf("Valor apuntado por 'puntero': %d\n", *puntero); // Accedemos al valor a través del puntero

    *puntero = 100; // Modificamos el valor a través del puntero

    printf("Nuevo valor de 'numero' despues de modificarlo a través de su puntero: %d\n", numero); // El valor de 'numero' cambió

    return 0;
}