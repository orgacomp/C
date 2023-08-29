#include <stdio.h>

//Declaración de funciones
void imprimir(int);
int cuad(int);
int producto(int , int);

//Implementacion de las funciones
int cuad(int numero) {
 return numero * numero;
}

int producto(int numero1, int numero2) {
 return numero1 * numero2;
}


void imprimir(int numero) {
   printf("%d", numero);  // no devuelve nada
}

int main(){
    int numero1;
    printf("Ingrese un número: ");
    scanf("%d", &numero1);
    int numero2;
    printf("Ingrese otro número: ");
    scanf("%d", &numero2);
    printf("El cuadrado del producto entre %d y %d es: ", numero1, numero2);
    imprimir(cuad(producto(numero1, numero2)));
    printf("\n");
}
