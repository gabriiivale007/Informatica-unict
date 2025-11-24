/*
*Codificare in linguaggio C un programma che stampi a ritroso
*la sequenza di caratteri da ’a’ a ’z’, ma non le vocali. Codifi-
*care due versioni differenti nelle quali si fa uso del costrutto
*for e del costrutto while rispettivamente.
*/

#include <stdio.h>

int main(){
    int N = 26;

    char alph[N];

    printf("CICLO FOR\n");
    for (int i=1; i<N; i++){
        if ('a' + i != 'e'|| 'a' + i != 'i' || 'a' + i != 'o' || 'a' + i != 'u'){
            printf("\na: %d + %d = %c", 'a', i, 'a' + i);
        }
    }

    printf("\n\nCICLO WHILE\n");
    int i = 1;
    while (i<N)
    {
        if ('a' + i != 'e'|| 'a' + i != 'i' || 'a' + i != 'o' || 'a' + i != 'u'){
            printf("\na: %d + %d = %c", 'a', i, 'a' + i);
        }
        i++;
    }

}