#include <stdio.h>

int main() {
    int dia;
    printf("Ingrese el dia de la semana: ");
    scanf("%d", &dia); 
    printf("La lista de actividades importantes del día:\n");
    switch (dia) {
        case 1:
            printf("Descuentos en el super\n");
        case 3:
            printf("hay clase de Organización del Computador!\n");
            break;
        case 2:
        case 4:
        case 5:
            printf("hacer tp datalab!!\n");
            break;
        default:
            printf("es finde!!\n");
    }
    return 0;
}
