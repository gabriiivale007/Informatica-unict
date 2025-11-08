
/*
  * CONSEGNA:
  * Siano a, b e c tre variabili di tipo int e k un numero intero
  * inserito dall’utente. Se a `e diverso da c e k > 8, copia in b la
  * somma di a e c; Se a `e uguale a c e k < 8, copia in a il valore
  * c−b; in tutti gli altri casi stampa il valore (a + b + c)/3 ed infine
  * copia il valore zero in a, b e c.
*/

#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0, k = 0;
    scanf("%d", &k);

    if (a != c && k > 8){
        b = a + c;
    }else if(k < 8){
        a = c - b;
    }else{
        printf("somma = %d",(a+b+c)/3);
        a = b = c = 0;
    }
    return 0;
}