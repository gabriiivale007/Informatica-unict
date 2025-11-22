/*
 * Homework H14.3
 *
 * 1. Dichiarare un array V di N double, con N=200;
 *
 * 2. Inizializzare gli elementi di V con numeri pseudo-casuali
 * nell’intervallo [10, 50].
 * NB: Usare sia aritmetica dei puntatori che notazione con parentesi quadre.
 *
 * 3. Dichiarare un puntatore al tipo const double. Mediante tale puntatore,
 * stampare gli elementi con indici che siano non divisibili per due
 * e non divisibili per tre.
 *
 * 4. Dichiarare un puntatore const al tipo double. Mediante tale puntatore,
 * sostituire tutti gli elementi dell’array che abbiano gli indici
 * specificati al punto precedente, con un valore double pseudo-casuale
 * in [100, 200];
 *
 * 5. Per i precedenti due punti, per l’accesso agli elementi dell’array,
 * usare:
 * i)  sia la notazione con parentesi quadre che
 * ii) la notazione che fa uso di aritmetica dei puntatori;
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main() {

    srand(time(NULL));

    int N = 200;
    int r = 0;
    int max_v = 50 * 100;
    int min_v = 10 * 100;


    double v[N];

    double *ptr = v;

    //inizializzazione elemnti di V
    for(int i=0; i<N; i++){
        r = rand() % ((max_v - min_v) + 1) + min_v;
        //meotdoo classico
        v[i] = (double) r/100;
        //metodo (puntatore)
        //*(v+i) = (double) r/100;
        printf("%.2f\n", v[i]);
    }
    
    print("escludendo i divisibuli per 2 e 3 ");
    // stampo solo indici non divisibili ne per due ne per tre
    for (int i=0;i<N;i++){
        if ((i%2 != 0)&&(i%3 != 0)){
            printf("\nindice: %d valore: %f",i, v[i]);
        }

        
    }
    print("\n\ncambianod i valori i divisibuli per 2 e 3 ");
    //cambiare i valori non calcolati in precedenza con un valore del range [100,...,200]
    for(int i=0;i<N;i++){
        if ((i%2 != 0)&&(i%3 != 0)){
            r = rand() % ((200 - 100) + 1) + 100;
            v[i] = (double) r/100;
            //con il puntatore
            *(ptr + i) = (double) r/100;
            printf("\nindice: %d valore: %f",i, v[i]);
        }

    }
    return 0;
}
