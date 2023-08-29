#include <stdio.h>

//Declaración de funciones
void imprimir(int);
int cuad(int);

//Implementacion de las funciones
int cuad(int numero) {
 return numero * numero;
}

void imprimir(int numero) {
   printf("%d", numero);  // no devuelve nada
}

int main(){
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    printf("EL cuadrado del número %d es: ", numero);
    imprimir(cuad(numero));
    printf("\n");
}