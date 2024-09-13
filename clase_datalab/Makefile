CC=c99
CFLAGS=-Wall -Wextra -z noexecstack -pedantic -Wno-unused-variable -Wno-unused-parameter -Wunused-but-set-variable -Wfloat-conversion -Wno-shift-negative-value -O0 -ggdb -no-pie -lm

all: numeros funciones ejercicios

# make numeros
# ./numeros
# para correr el programa de numeros.c
numeros: numeros.c funciones.o
	$(CC) $(CFLAGS) $^ -o $@

funciones.o: funciones.c
	$(CC) $(CFLAGS) -c $< -o $@

# make ejercicios
# ./ejercicios
# para correr el programa de ejercicios.c
ejercicios.o: ejercicios.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f numeros
	rm -f ejercicios
