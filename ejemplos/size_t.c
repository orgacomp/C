#include <stdio.h>

size_t count_zeros(int* array, size_t length){
    size_t ceros = 0; // inicializo en 0 la cantidad de ceros
    for (size_t i=0; i<length; ++i){ 
        if(array[i] == 0){  
            ceros++; // incremento la cantidad de ceros
        }
    }
    return ceros;
}

int main() {
    int numeros[] = {1, 0, 0, 2, 0, 3, 4, 0};
    size_t cantidadCeros = count_zeros(numeros, sizeof(numeros) / sizeof(numeros[0]));

    printf("Cantidad de ceros en el arreglo: %zu\n", cantidadCeros);

    return 0;
}




