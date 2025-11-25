/*
    Tipi numerici in C

    Nota:
    Le dimensioni in bytes sono valori tipici, dipendono
    dall’implementazione e dall’architettura specifica.
    (*) Alcuni valori sono approssimati.

    ----------------------------
    Tipo             Range (tipico)        Precisione / Dimensione
    ----------------------------
    int              [-2^31 .. 2^31-1]     ~4 bytes
    unsigned int     [0 .. 2^32-1]         ~4 bytes

    long             [-2^63 .. 2^63-1]     ~8 bytes
    unsigned long    [0 .. 2^64-1]         ~8 bytes

    short            [-2^15 .. 2^15-1]     ~2 bytes
    unsigned short   [0 .. 2^16-1]         ~2 bytes

    float            precisione ~7 cifre   4 bytes
    double           precisione ~15 cifre  8 bytes
    long double      precisione ~18 cifre  16 bytes (*)
*/

//operatore sizeof()


#include <stdio.h>

//INT_MAX, INT_MIN... LONG_MAX 
//mi dice il massimo numero intero rappresetnabile nella mia piattaforma
#include <limits.h> 

//FLT_MIN, DBL_MIN... LDBL_MIN
//mi dice il massimo numero in virgola mobile rappresetnabile nella mia piattaforma
#include <float.h>

int main(){
    int x;
    long y;
    long long w;
    short int a;

    printf(" sizeof(int)= %zd,sizeof(int)= %zd, sizeof(long long)= %zd\n",sizeof(int), sizeof(long), sizeof(long long));
    double z; //64bit!
}