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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double n1 = 0.0, n2 = 0.0;
    int N = 0;

    printf("Inserire due numeri decimali > 0 e diversi, e un intero N > 1\nES: 3.12 4.11 4\n");
    if (scanf("%lf %lf %d", &n1, &n2, &N) != 3) {
        fprintf(stderr, "Input non valido\n");
        return 1;
    }

    if (n1 <= 0 || n2 <= 0 || N <= 1 || n1 == n2) {
        fprintf(stderr, "Condizioni non rispettate: numeri >0, diversi, N>1\n");
        return 1;
    }

    int a = (int) round(n1);
    int b = (int) round(n2);
    if (a > b) {
        int tmp = a; a = b; b = tmp;
    }

    printf("a = %d, b = %d\n", a, b);

    for (int p = a; p <= b; ++p) {
        long long countLess = N - 1;
        long long sumLess = countLess * (long long)p - (countLess * (countLess + 1)) / 2;

        long long countGreater = 2LL * N;
        long long sumGreater = countGreater * (long long)p + (countGreater * (countGreater + 1)) / 2;

        printf("p = %d: somma %lld numeri minori = %lld; somma %lld numeri maggiori = %lld\n",
               p, countLess, sumLess, countGreater, sumGreater);
    }

    return 0;
}