#include <stdio.h>
#include <string.h>

// sumBytePos - retorna la suma de cada byte en x si x es positivo, de lo contrario, 0
//  donde x es un entero (int)   Ejemplos sumBytePos(0xF0000100) = 0, sumBytePos(0x00109A45) = 239
//  Operadores permitidos: ! ~ & ^ | + << >>


int sumBytePos(int x)
{
    int sign = (x >> 31);
    //x = x & ~sign;

    int byte0 = (x >> 0) & 0xFF;
    int byte1 = (x >> 8) & 0xFF;
    int byte2 = (x >> 16) & 0xFF;
    int byte3 = (x >> 24) & 0xFF;
    int suma = byte0 + byte1 + byte2 + byte3;
    return suma & ~sign;
}

// Calcula un circular shift de x en n bytes a la derecha si shift = 1, a la izquierda si shift = -1
int circularShift(int x, int n, int shift)
{
    // x un int de 32 bits, 0<n<4 , shift = 1 derecha,  shift = -1 izquierda
    // x= 0xFADEAAAA n=3, shift= 1 , -1  => res = 0xDEAAAAFA, res = 0xAAFADEAA

    // 0xFFFF FFFF => 0xFFF0 0000
    // 0xFFFF FFFF => 0xFFFF F000 => 0X0000 0FFF

    int bytes_si = (~0x0) << ((4 - n) << 3); // "separa" los bits para shift i

    int bytes_sd = ~(~0x0 << (n << 3)); // "separa" los bits para shift d

    int s_i_ad = x & bytes_si;

    int s_i_at = x & (~bytes_si);


    int s_d_at = x & bytes_sd;
    int s_d_ad = x & (~bytes_sd);

    int shift_d = (s_d_at << ((4 - n) << 3)) | ((s_d_ad >> (n << 3)) & ~bytes_si);
    int shift_i = (s_i_ad >> ((4 - n) << 3) & bytes_sd) | (s_i_at << (n << 3));

    shift = shift >> 1;
    return (shift_i & shift) | (shift_d & (~shift));
}

int main()
{
    int x_sumbyte = 0x1B598412; // RESPUESTA: 10A
    printf("RES: %X\n", sumBytePos(x_sumbyte));

    int x_shift = 0x109AAA45; // 45109AAA, RESPUESTA: 9AAA4510
    printf("RES: %X\n", circularShift(x_shift, 3, 1));

    return 0;
}
