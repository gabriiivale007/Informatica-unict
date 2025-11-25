/*
*Codificare un programma che chiede all’utente di inserire due
*numeri decimali maggiori di zero e diversi tra loro (ES: 10.2
*e 24.7), ed un numero intero N > 1.
*• il programma calcola l’arrotondamento di entrambi i
*   numeri all’intero pi`u vicino, Siano a e b i due numeri
*   ottenuti, con a < b.
*• per ogni numero a ≤p ≤b, calcola e stampa la
*   somma degli N-1 numeri minori di p e la somma dei
*   2N numeri maggiori di p;
*/
#include <stdio.h>

int main() {
    double n1 = 1.12,n2 = 2.11;
    int n = 0, v = 0, i = 0;
    

    printf("dammi due numeri decimali maggiori di 0\n OUTPUT RICHIESTO ES: [3.12 4.11 4]\n");
    scanf("%lf %lf %d",&n1,&n2, &n);

    //calcolo arrotondamento di n1 
    if ((float)((int)n1) > n1){
        
    }
    printf("%d\n\n", i);

    printf("%lf,%lf,%d", n1,n2,n);
}