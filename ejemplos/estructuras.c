#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura Auto
typedef struct s_Auto {
    int anio;
    int velocidadMaxima;
    int precio;
}Auto_t;

// Función para inicializar un objeto Auto
Auto_t* inicializarAuto(int anio, int velocidad, int precio) {
    Auto_t* autoObj = (Auto_t*)malloc(sizeof(Auto_t));
    autoObj -> anio = anio;
    autoObj->velocidadMaxima = velocidad;
    autoObj->precio = precio;
    return autoObj;
}

// Función para mostrar los detalles de un objeto Auto
void mostrarDetalles(const Auto_t* autoObj) {
    printf("Detalles del auto:\n");
    printf("Año: %d\n", autoObj->anio);
    printf("Velocidad Máxima: %d km/h\n", autoObj->velocidadMaxima);
    printf("Precio: $%d\n", autoObj->precio);
}


int main() {
    // Inicialización utilizando la función
    Auto_t* autoObj = inicializarAuto(5, 200, 20000);

    // Acceso e impresión utilizando las funciones
    mostrarDetalles(autoObj); 
    free(autoObj);
    return 0;
}
