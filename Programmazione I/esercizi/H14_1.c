//? CONSEGNA
/*
Dichiarare ed inizializzare tre variabili, un double, uno short unsigned, ed
un char, assegnando valori a piacere.
Dichiarare altrettante variabili puntatore dello stesso tipo ed assegnare ad
essi gli indirizzi delle variabili dichiarate in precedenza.
Stampare, mediante la funzione di libreria printf() i valori contenuti
all’interno di tali variabili in due modi differenti: i) mediante le variabili
stesse e ii) mediante le variabili puntatore.
Stampare, mediante printf(), i valori contenuti all’interno dei puntatori
(gli indirizzi di memoria).
*/

#include <stdio.h>

int main() {

    double var_double = 12.0;
    unsigned short var_short = 3;
    char var_char = 'c';
    
    double *ptr_double = &var_double;
    unsigned short *ptr_short = &var_short;
    char *ptr_char = &var_char;

    printf("stampo i valori con i puntatori");
    printf("\n%f, memoria: %p", *ptr_double, ptr_double);
    printf("\n%u, memoria: %p", *ptr_short, ptr_short);
    printf("\n%c, memoria: %p", *ptr_char, ptr_char);

    printf("\nstampo i valori con le variabili");
    printf("\n%f, memoria: %p", var_double, &var_double);
    printf("\n%u, memoria: %p", var_short, &var_short);
    printf("\n%c, memoria: %p", var_char, &var_char);

 
    
    return 0;
} 