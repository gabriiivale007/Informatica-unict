/*
*Codificare un programma che stampi le prime N potenze di 2,
*dove N `e un parametro scelto dall’utente (input da tastiera).
*/

#include <stdio.h>

int main() {
    int n = 0;
    int ris = 1;
    printf("scegli potenza di riferimento");
    scanf("%d",&n);
 
    for (int i=1; i<=n; i++){
        printf("2 ^ %d = ", i);
        ris *= 2;
        printf("%d\n",ris);
    }
    return 0;
}