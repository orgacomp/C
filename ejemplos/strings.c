#include <stdio.h>
#include <string.h>

int main() {
    // Declaración e inicialización de un string
    char mensaje[] = "Hola, alumnos de Organización del Computador!";
    printf("Mensaje: %s\n", mensaje);

    // Obtener la longitud del string
    int longitud = strlen(mensaje);
    printf("Longitud: %d\n", longitud);

    // Copiar un string en otro
    char copia[100]; //asegurarse que entren todos los carácteres
    strcpy(copia, mensaje);
    printf("Copia: %s\n", copia);

    // Concatenar strings
    char saludo[] = " ¡Bienvenidos!";
    strcat(mensaje, saludo);
    printf("Mensaje después de concatenar: %s\n", mensaje);

    return 0;
}
