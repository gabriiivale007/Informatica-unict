/*
*Codificare un programma che svolga le segg. operazioni: 
*
*1) prenda in input a linea di comando due numeri N ed M; 
*2) legga, dallo standard input, una matrice di stringhe di dimensioni N x M; ogni riga della matrice e' rappresentata da una linea di testo, in cui le stringhe della singola riga sono separate da spazi;
*3) inserisca la stringhe in una matrice N x M di strutture S, in cui ogni struttura contenga un campo per la stringa (si assuma che la stringa contenga max 30 caratteri) ed un campo per la lunghezza della stringa; 
*4) stampi su standard output la media della lunghezza di ogni stringa per ogni singola colonna della matrice S;
*5) inserisca i numeri medi calcolati al punto precedente in un array di dimensione M;
*6) proceda con l'ordinamento crescente di ogni colonna della matrice S che si basi sul confronto lessicografico tra le stringhe;  
*
*Il programma potra' essere codificato in un unico file sorgente, ma dovra' contenere almeno le segg. funzioni:
*
*- readArgs(): funzione che prende in input i parametri argc ed argv del main 
*e restituisce una struttura con i due numeri N ed M;
*- allocMatrix(): funzione che proceda con allocazione dinamica di un array bidimensionale di N x M strutture del tipo indicato al punto 3; 
*- readMatrix(): funziome che legga, dallo standard input, la matrice di stringhe  
*di dimensioni N x M e la memorizzi in un array bidimensionale di 
*strutture S come specificato nel punto 3; 
*- computeAvg(): funzione che prende in input la matrice S e calcoli
*la media di una singola colonna (parametro della funzione) della matrice; 
*- buildAvgArray(): funzione che prenda in input la matrice di strutture S e 
*calcoli la media per ogni colonna di S come specificato al punto 5 (mediante la funzione computeAvg()), restituisca
*un array di dimensioni M contenenti tali valori medi; 
*- sortColMatrix(): funzione che proceda all'ordinamento della matrice S 
*come specificato al punto 6.
*
*Si proceda, da shell, nel seguente modo: 
*
*$ ./a.out 5 6 < input.txt
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stringa
{
    char data[31];
    unsigned l;
};

struct parameters
{
    unsigned n;
    unsigned m;
};

struct stringa **allocMatrix(unsigned n, unsigned m)
{
    // 1. allocazione dinamica di un vettore di n
    // puntatori a struct stringa
    struct stringa **ret = malloc(sizeof(struct stringa *) * n);
    // 2. allocazione dinamica di n vettori di
    // m variabili di tipo struct stringa
    for (unsigned i = 0; i < n; i++)
        ret[i] = malloc(sizeof(struct stringa) * m);

    return ret;
}

// restituizione avverrebbe  per copia
struct parameters readArgs1(int argc, char *argv[])
{

    struct parameters ret;

    ret.n = atoi(argv[1]);
    ret.m = atoi(argv[2]);

    return ret; // struct parameters myPars = readArgs(argc, argv);
}

struct parameters *readArgs(int argc, char *argv[])
{
    // controllare il numero di parametri
    // che deve essere maggiore o uguale a ?

    if (argc < 3)
    {
        fprintf(stderr, "\n Usage: %s <n> <m>", argv[0]);
        return NULL;
    }

    struct parameters *ret = malloc(sizeof(struct parameters));

    ret->n = atoi(argv[1]);
    ret->m = atoi(argv[2]);

    return ret;
}

void readMatrix(struct stringa **matrix, unsigned n, unsigned m)
{

    char buffer[31];
    for (unsigned i = 0; i < n; i++)
        for (unsigned j = 0; j < m; j++)
            if (scanf("%s", buffer) < 1)
                fprintf(stderr, "\n Errore di lettura da stdin!! \n ");
            else
            {
                printf("\n Read: %s", buffer);
                strcpy(matrix[i][j].data, buffer); // copia la str
                matrix[i][j].l = strlen(buffer);   // scrivi l
            }
}

void printMatrix(struct stringa **matrix, unsigned n, unsigned m)
{

    printf("\n ** printMatrix() ** \n");
    for (unsigned i = 0; i < n; i++)
    {
        for (unsigned j = 0; j < m; j++)
            printf("%s ", matrix[i][j].data);
        printf("\n");
    }
}
double computeAvg(struct stringa **matrix, unsigned n, unsigned col)
{
    if (n == 0)
        return 0.0;

    unsigned long sum = 0;
    for (unsigned i = 0; i < n; ++i)
        sum += matrix[i][col].l;

    return (double)sum / (double)n;
}

double *buildAvgArray(struct stringa **matrix, unsigned n, unsigned m)
{
    if (m == 0)
        return NULL;

    double *avgs = malloc(sizeof(double) * m);
    if (!avgs)
    {
        fprintf(stderr, "Errore allocazione array medie\n");
        return NULL;
    }

    for (unsigned j = 0; j < m; ++j)
        avgs[j] = computeAvg(matrix, n, j);

    return avgs;
}
void sortColMatrix(struct stringa **matrix, unsigned n, unsigned m)
{
    if (!matrix || n == 0 || m == 0)
        return;

    for (unsigned col = 0; col < m; ++col)
    {
        for (unsigned i = 0; i + 1 < n; ++i)
        {
            unsigned min_idx = i;
            for (unsigned k = i + 1; k < n; ++k)
            {
                if (strcmp(matrix[k][col].data, matrix[min_idx][col].data) < 0)
                    min_idx = k;
            }
            if (min_idx != i)
            {
                struct stringa tmp = matrix[i][col];
                matrix[i][col] = matrix[min_idx][col];
                matrix[min_idx][col] = tmp;
            }
        }
    }
}
int main(int argc, char *argv[])
{
    struct parameters *pars = readArgs(argc, argv);
    if (!pars)
    {
        fprintf(stderr, "\n Errors parsing parameters!\n");
        return 2;
    }

    unsigned n = pars->n;
    unsigned m = pars->m;

    printf("\n n: %u, m: %u\n", n, m);

    if (n == 0 || m == 0)
    {
        fprintf(stderr, "n and m must be > 0\n");
        free(pars);
        return 3;
    }

    /* allocazione matrice */
    struct stringa **matrix = allocMatrix(n, m);
    if (!matrix)
    {
        fprintf(stderr, "Errore allocazione matrice\n");
        free(pars);
        return 4;
    }

    /* lettura delle stringhe da standard input */
    readMatrix(matrix, n, m);

    /* stampa matrice originale */
    printf("\nMatrice originale:\n");
    printMatrix(matrix, n, m);

    /* calcolo medie per colonna e stampa */
    double *avgs = buildAvgArray(matrix, n, m);
    if (avgs)
    {
        printf("\nMedie per colonna:\n");
        for (unsigned j = 0; j < m; ++j)
            printf("col %u: %.2f\n", j, avgs[j]);
    }
    else
    {
        fprintf(stderr, "Impossibile calcolare le medie\n");
    }

    /* ordinamento lessicografico di ogni colonna */
    sortColMatrix(matrix, n, m);

    /* stampa matrice ordinata */
    printf("\nMatrice ordinata per colonne (lessicografico):\n");
    printMatrix(matrix, n, m);

    /* deallocazioni */
    free(avgs);
    for (unsigned i = 0; i < n; ++i)
        free(matrix[i]);
    free(matrix);
    free(pars);

    return 0;
}
