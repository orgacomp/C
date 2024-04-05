#include "funciones.h"
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>

void numbers_test()
{
    // NUMERO ENTERO 3 - REPRESENTACION DECIMAL
    int num1 = 3;
    printf("Numero decimal: %d\n", num1);


    // NUMERO ENTERO 3 - REPRESENTACION HEXADECIMAL
    int num2 = 0x00000003;
    //int num2 = 0x3;
    printf("Numero hexadecimal: %d\n", num2);


    // REPRESENTACION BINARIA DE 3
    // 0000 0000 0000 0000 0000 0000 0000 0011
    // Es un numero de 32 bits == 4 bytes


    // NUMERO ENTERO -3
    int num3 = -3;
    printf("Numero negativo: %d\n", num3);


    // REPRESENTACION BINARIA DE -3
    // 1111 1111 1111 1111 1111 1111 1111 1101
    
    // REPRESENTACION BINARIA DE -1
    // 1111 1111 1111 1111 1111 1111 1111 1111




    // MAXIMO VALOR DE UN INT
    int max_int = 0x7fffffff;
    // 2.147.483.647
    printf("Maximo valor de un int: %d\n", max_int);

    // Su representacion binaria:
    // 0111 1111 1111 1111 1111 1111 1111 1111

    // Si sumamos 1, se convierte en el MINIMO VALOR de un int
    //    0111 1111 1111 1111 1111 1111 1111 1111
    //  + 0000 0000 0000 0000 0000 0000 0000 0001
    //    ---------------------------------------
    //    1000 0000 0000 0000 0000 0000 0000 0000

    // -2.147.483.648
    printf("Minimo valor de un int: %d\n", max_int + 1);




    // OTRAS REPRESENTACIONES DE NUMEROS: UNSIGNED INT
    uint32_t num4 = 0x00000003;

    printf("Numero 3 sin signo: %u\n", num4);
    // Representacion binaria:
    // 0000 0000 0000 0000 0000 0000 0000 0011

    uint32_t num5 = 0x7fffffff;
    // 2.147.483.647
    printf("¿Maximo valor de un unsigned int? %u\n", num5);

    // Representacion binaria:
    // 0111 1111 1111 1111 1111 1111 1111 1111

    // Si sumamos 1, que pasa?

    //    0111 1111 1111 1111 1111 1111 1111 1111
    //  + 0000 0000 0000 0000 0000 0000 0000 0001
    //    ---------------------------------------
    //    1000 0000 0000 0000 0000 0000 0000 0000
    printf("No se vuelve negativo: %u\n", num5 + 1);


    // MAXIMO VALOR DE UN UNSIGNED INT
    uint32_t max_uint = 0xffffffff;
    // 4.294.967.295
    printf("Maximo valor de un unsigned int: %u\n", max_uint);

    // Representacion binaria:
    // 1111 1111 1111 1111 1111 1111 1111 1111

    // ¿Que pasa si sumamos 1?
    printf("Maximo valor de un unsigned int + 1: %u\n", max_uint + 1);


    //    1111 1111 1111 1111 1111 1111 1111 1111
    //  + 0000 0000 0000 0000 0000 0000 0000 0001
    //    ---------------------------------------
    //    0000 0000 0000 0000 0000 0000 0000 0000




    // OTROS NUMEROS SIGNED & UNSIGNED

    int8_t int_8bits = 0x7f;
    printf("Numero int de 8 bits: %d\n", int_8bits);
    // Representacion binaria:
    // 0111 1111

    //int8_t int_8bits_overflow = 0x80;
    // Representacion binaria:
    // 1000 0000

    uint8_t uint_8bits = 0xff;
    printf("Numero uint de 8 bits: %u\n", uint_8bits);
    // Representacion binaria:
    // 1111 1111
    

    // OTROS NUMEROS SIGNED & UNSIGNED
    int16_t int_16bits = 0x7fff;
    printf("Numero int de 16 bits: %d\n", int_16bits);
    // Representacion binaria:
    // 0111 1111 1111 1111

    uint16_t uint_16bits = 0xffff;
    printf("Numero uint de 16 bits: %u\n", uint_16bits);
    // Representacion binaria:
    // 1111 1111 1111 1111

    int64_t int_64bits = 0x0000000000000003;
    printf("Numero int de 64 bits: %ld\n", int_64bits);
    // Representacion binaria:
    // 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0011





    // OPERADORES LOGICOS!
    // AND  =>  &
    // OR   =>  |
    // XOR  =>  ^
    // NOT  =>  ~

    int32_t and_1 = 0x0f;
    // Representacion binaria:
    // 0000 0000 0000 0000 0000 0000 0000 1111

    int32_t and_2 = 0x03;
    // Representacion binaria:
    // 0000 0000 0000 0000 0000 0000 0000 0011

    // AND
    //    0000 0000 0000 0000 0000 0000 0000 1111
    //  & 0000 0000 0000 0000 0000 0000 0000 0011
    //    ---------------------------------------
    //    0000 0000 0000 0000 0000 0000 0000 0011

    int32_t and_result = and_1 & and_2;
    printf("Numero 1: %d - Numero 2: %d - Resultado AND: %d\n", and_1, and_2, and_result);



    uint8_t or_1 = 0x07;
    // Representacion binaria:
    // 0000 0111

    uint8_t or_2 = 0x7f;
    // Representacion binaria:
    // 0111 1111

    // OR
    //    0000 0111
    //  | 0111 1111
    //    ---------
    //    0111 1111

    uint8_t or_result = or_1 | or_2;
    printf("Numero 1: %u - Numero 2: %u - Resultado OR: %u\n", or_1, or_2, or_result);



    uint32_t xor_1 = 0x0000ffff;
    // Representacion binaria:
    // 0000 0000 0000 0000 1111 1111 1111 1111

    uint32_t xor_2 = 0xffffffff;
    // Representacion binaria:
    // 1111 1111 1111 1111 1111 1111 1111 1111

    // XOR
    //    0000 0000 0000 0000 1111 1111 1111 1111
    //  ^ 1111 1111 1111 1111 1111 1111 1111 1111
    //    ---------------------------------------
    //    1111 1111 1111 1111 0000 0000 0000 0000

    uint32_t xor_result = xor_1 ^ xor_2;
    printf("Numero 1: %u - Numero 2: %u - Resultado XOR: %u\n", xor_1, xor_2, xor_result);



    int32_t not_1 = 0x0000000f;
    // Representacion binaria:
    // 0000 0000 0000 0000 0000 0000 0000 1111

    // NOT
    //    0000 0000 0000 0000 0000 0000 0000 1111
    //    ---------------------------------------
    //    1111 1111 1111 1111 1111 1111 1111 0000

    int32_t not_result = ~not_1;
    printf("Numero 1: %d - Resultado NOT: %d\n", not_1, not_result);




    // SHIFTS!

    // LEFT SHIFT  =>  <<
    // RIGHT SHIFT =>  >>

    int32_t left_shift = 0x0000000f;
    // Representacion binaria:
    // 0000 0000 0000 0000 0000 0000 0000 1111

    // LEFT SHIFT
    //    0000 0000 0000 0000 0000 0000 0000 1111
    //    << 4
    //    ---------------------------------------
    //    0000 0000 0000 0000 0000 0000 1111 0000

    int32_t left_shift_result = left_shift << 31;
    printf("Numero: %d - Resultado LEFT SHIFT: %d\n", left_shift, left_shift_result);


    int32_t right_shift = 0xffff0000;
    // Representacion binaria:
    // 1111 1111 1111 1111 0000 0000 0000 0000

    // RIGHT SHIFT
    //    1111 1111 1111 1111 0000 0000 0000 0000
    //    >> 12
    //    ---------------------------------------
    //    0000000000000 1111 1111 1111 1111 0000

    int32_t right_shift_result = right_shift >> 12;
    printf("Numero: %d - Resultado RIGHT SHIFT: %d\n", right_shift, right_shift_result);
    printf("Nuevo numero: %d - Resultado RIGHT SHIFT: %d\n", right_shift, right_shift >> 16);



    // NUMEROS FLOTANTES

    // ECUACION:
    // Float = (-1)^sign * mantissa * 2^(exponent - 127)


}


void read_and_write_from_file(int argc, char *argv[])
{
	if (argc != 2) {
		printf("Error: Debe ingresar un archivo como argumento.\n");
		return;
	}

	char **file_data = read_from_file(argv[1]);
	write_from_file(file_data);
}


int main(int argc, char *argv[])
{
	// PRUEBA LEER ARCHIVOS - MERGE DE RAMAS
	read_and_write_from_file(argc, argv);

	// PRUEBA DE NUMEROS - TIPOS DE DATOS
	numbers_test();

	return 0;
}