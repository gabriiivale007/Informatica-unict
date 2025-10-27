// DICHIARAZIONI

/*
RICORDA
*************************************

1)  NON DICHIARE MAI UNA VARIABILE SENZA MAI INIZIALIZZARLA
    quindi fai int x = 0; e non solo int x = 0;
    OVVIAMENTE NON VALE SOLO PER LE VARIABILI INTERE

2)  È SEMPRE PIÙ EFFICENTE UN Define RISPETTO A const
*************************************
*/

// sono direttive che vengono fatte prima della compilazione e andranno a sostituire le occorrenze nel codice

#define PI 3.14159
#define MAX 100
#define MESSAGGIO "Hello World"
#include <stdio.h>

int main()
{

    // VARIABILI SEMPLICI

    int a = 0;    // intero (0,1,2...100,101...) POSSONO ESSERE SIA POSITIVI CHE NEGATIVI
    float b = 0;  // decimale (0.0000,0.00010..., 1.0000, 1.0001...) POSSONO ESSERE SIA POSITIVI CHE NEGATIVI
    char c = 'c'; // stringa ('a','b','c'...) tutte le lettere della tabella del codice ascii

    // COSTANTI

    const int x = 0; // una variabile che non posso toccare, mi permette solo la lettura

    // OPERATORI LOGICI BASILARI

    // Somma
    int somma = 10 + 5; // risultato: 15

    // Sottrazione
    int sottrazione = 10 - 3; // risultato: 7

    // Divisione
    float divisione = 10.0 / 3.0; // risultato: 3.333...
    int divisioneIntera = 10 / 3; // risultato: 3 (divisione tra interi)

    // OUTPUT
    printf("%d, %f, %c", a, b, c); // stampiamo in ordine int, float, char
}

// esempi svolti 7_00_var.c
// esempi svolti 7_04_macro.c