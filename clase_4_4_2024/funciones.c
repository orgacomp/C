#include "funciones.h"

/**
 * Esta funcion va a leer las lineas de un archivo, y devuelve un vector de strings.
*/
char **read_from_file(char *filename)
{
	char **lines = malloc(sizeof(char*) * 5);

	FILE *file = fopen(filename, "r");
	if (file == NULL) {
		printf("Error: No se pudo abrir el archivo.\n");
		return NULL;
	}

	char buffer[100];
	int i = 0;
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		lines[i] = malloc(sizeof(char) * 100);
		strcpy(lines[i], buffer);
		i++;
	}

	fclose(file);
	return lines;
}

/**
 * Esta funcion recibe el vector de strings, y lo escribe en consola.
*/
void write_from_file(char **file_data)
{
	if (file_data == NULL) {
		printf("Error: No se pudo leer el archivo.\n");
		return;
	}

	for (int i = 0; i < 5; i++) {
		printf("%s", file_data[i]);
        free(file_data[i]);
	}
    free(file_data);

	return;
}