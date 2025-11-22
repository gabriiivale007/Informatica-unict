//? CONSEGNA
/*
 * Homework H14.2
 *
 * 1. Dichiarare un array D di 10 double e un array A di 10 int.
 *
 * 2. Inizializzare gli elementi:
 *      - D con valori pseudo-casuali nell’intervallo [1.25, 90]
 *      - A con valori pseudo-casuali nell’intervallo [10, 50]
 *    Utilizzare sia aritmetica dei puntatori che notazione con parentesi quadre.
 *
 * 3. Dichiarare due puntatori:
 *      - ptrD (double *)
 *      - ptrA (int *)
 *    e inizializzarli in modo che puntino al primo elemento rispettivamente
 *    di D e A.
 *
 * 4. Stampare:
 *      - gli elementi di indice dispari di D
 *      - gli elementi di indice pari di A
 *    Per ogni elemento stampare sia il valore che il relativo indirizzo in memoria.
 *    Usare sia i nomi degli array che le variabili puntatore, impiegando sia
 *    aritmetica dei puntatori che notazione con parentesi quadre (operatori * e &).
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    //mettiamo come seme i seocndi passati dal 1970
    srand(time(NULL));

    int max_int = 50;
    int min_int = 10;

    int max_double = 90 * 100;
    int min_double = 1.25 * 100;

    int N = 0;
    do{
        printf("quanto deve essere grande il vettore");
        scanf("%d",&N);
    }while(N < 0 && N > 100);
    
    //vettori
    double D[N];
    int A[N];

    //pointer
    double *ptr_double = D;
    int *ptr_int = A;

    //!FORMULA GENERALE interi
    //?rand() % ((max_int - min_int) + 1) + min_int;

    //!FORMULA GENERALE virgola
    //?rand() % (((double)(max_double - min_double) + 1) + min_double) / max_double;

    //creo valori interi
    for(int i=0;i<N;i++){
        //inserimento classico
        A[i] = rand() % ((max_int - min_int) + 1) + min_int;

        //inserimento con i pointer metodo 1
        //*(ptr_int++) = rand() % ((max_int - min_int) + 1) + min_int;
        //inserimento con i pointer metodo 2
        //*(ptr_int + i) = rand() % ((max_int - min_int) + 1) + min_int;
    }


    //creo valori double
    for(int i=0;i<N;i++){
        //inserimento classico
        D[i] = ((double)(rand() % 9000 + 125) / 100);

        //inserimento con i pointer metodo 1
        //*(ptr_double++) = ((double)(rand() % 9000 + 125) / 100);
        //inserimento con i pointer metodo 2
        //*(ptr_double + i) = ((double)(rand() % 9000 + 125) / 100);
    }

    printf("\nARRAY:\n| A | | D |");

    for(int i = 0; i<N; i++){
        printf("\n| %d | | %f |", A[i], D[i]);

    }

    printf("\ncontenuto Array Intero (solo indici pari):\n");
    //stampo il contenuto
    for(int i = 0; i<N; i+=2){
        printf("%d, ", A[i]);
    }

    printf("\ncontenuto Array Double (solo indici dispari):\n");
    //stampo il contenuto
    for(int i = 1; i<N; i+=2){
        printf("%.2f, ", D[i]);
    }
    return 0;
}