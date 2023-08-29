#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero); //lee los datos ingresados desde la entrada estándar 

    printf("El número %d es ", numero);

    if (numero > 0) {
        printf("positivo.\n");
    } else if (numero < 0) {
        printf("es negativo.\n");
    } else {
        printf("cero.\n");
    }
     printf("Además es %s. \n", numero % 2 == 0? "par" : "impar");

    return 0;
}