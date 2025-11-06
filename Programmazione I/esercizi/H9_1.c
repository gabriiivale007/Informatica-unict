
/*
 * CONSEGNA:
 * Siano a, b e c tre variabili di tipo int. Trovare il massimo
 * dei tre numeri usando l’operatore condizionale.
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    a = 10;
    b = 13;
    c = 8;

    if (a > b && a > c)
    { // se a è maggiore sia di b che di c
        // stampo a
        printf("%d", a);
    }
    else if (b > c)
    { // se b è maggiore di c
        // stampo b
        printf("%d", b);
    }
    else
    { // per esclusione stampo c
        // stampo c
        printf("%d", c);
    }
    return 0;
}