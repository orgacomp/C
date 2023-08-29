#include <stdio.h>

// Definición de nuevos tipos de datos usando typedef
typedef int Kilometros;
typedef double Litros;

int main() {
    // Declarar variables de los nuevos tipos definidos
    Kilometros distancia = 150;
    Litros combustible = 12.5;

    double consumoPorKilometro = combustible / distancia;

    printf("Distancia recorrida: %d km\n", distancia);
    printf("Combustible utilizado: %.2f litros\n", combustible);
    printf("Consumo por kilómetro: %.2f litros/km\n", consumoPorKilometro);
    return 0;
}

