/*

*Codificare in linguaggio C un programma che produca la som-
*ma dei numeri interi dispari da 1 a 99, facendo uso del co-
*strutto for. Dalla somma vanno esclusi i numeri divisibili per
*tre.
*/

#include <stdio.h>

int main() {
    int N = 100, som = 0;

    printf("di quanti numeri fare la somma: ");
    scanf("%d",&N);
    printf("\n");

    for(int i=0; i<N; i++){
        if ((i % 2 != 0)&&(i % 3 != 0)){
            som += i;
            printf("%d,",i);
        }
    }
    printf("somma totale:\n%d", som);
    return 0;
}
