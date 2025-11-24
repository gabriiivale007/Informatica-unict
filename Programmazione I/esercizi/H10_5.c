/*
*Codificare in linguaggio C un programma che stampi a ri-
*troso i numeri positivi pari minori o uguali a mille; inoltre le
*iterazioni finiscono se la somma dei numeri precedentemente
*stampati `e maggiore o uguale a centomila.
*/

#include <stdio.h>

int main() {
    int N = 1000, sent = 0;

    for(int i=N; i>0; i--){
        if (i%2==0){
            printf("%d, ", i);
            sent += i;
        }
        if (sent >= 100000){
            printf("\n\nsuperato i 100k, somma = %d", sent);
            break;
        }
    }
    printf("\nfine");
    return 0;
}