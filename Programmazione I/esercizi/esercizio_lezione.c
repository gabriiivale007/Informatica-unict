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

int main(int argc, char *argv[])
{

    struct parameters *pars = readArgs(argc, argv);
    if (!pars)
    {
        fprintf(stderr, "\n Errors parsing parameters!");
        return 2;
    }

    printf("\n n: %u, m: %u", pars->n, pars->m);

    // allocazione matrice
    struct stringa **matrix = allocMatrix(pars->n, pars->m);

    // lettura delle stringhe da standard input
    // le stringhe vanno memorizzate all'interno
    // della matrice matrix

    readMatrix(matrix, pars->n, pars->m);

    printMatrix(matrix, pars->n, pars->m);
}
