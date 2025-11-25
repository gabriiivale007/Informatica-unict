/*
    ARRAY IN C

    Un array è una collezione di elementi dello stesso tipo,
    memorizzati in posizioni di memoria contigue.

    DICHIARAZIONE:
    tipo nome_array[dimensione];

    CARATTERISTICHE:
    - Gli indici partono da 0
    - La dimensione deve essere nota a compile-time (o usare VLA)
    - Non c'è controllo automatico dei limiti (bounds checking)
    - Il nome dell'array è un puntatore al primo elemento

    ATTENZIONE:
    - Accedere a indici fuori dai limiti causa comportamento indefinito!
    - Gli array non conoscono la propria dimensione
*/

#include <stdio.h>
#include <string.h>

int main()
{

    // ==============================
    // 1) DICHIARAZIONE E INIZIALIZZAZIONE
    // ==============================
    printf("=== DICHIARAZIONE E INIZIALIZZAZIONE ===\n");

    // Dichiarazione con dimensione esplicita
    int numeri[5]; // array di 5 interi (NON inizializzato - contiene garbage)

    // Dichiarazione con inizializzazione
    int valori[5] = {10, 20, 30, 40, 50};

    // Inizializzazione parziale (il resto viene messo a 0)
    int parziale[5] = {1, 2}; // {1, 2, 0, 0, 0}

    // Inizializzazione a zero
    int zeri[5] = {0}; // tutti elementi a 0

    // Dimensione automatica (dedotta dal numero di elementi)
    int automatico[] = {5, 10, 15, 20}; // dimensione = 4

    // Stampa array valori
    printf("Array valori: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", valori[i]);
    }
    printf("\n");

    // ==============================
    // 2) ACCESSO AGLI ELEMENTI
    // ==============================
    printf("\n=== ACCESSO AGLI ELEMENTI ===\n");

    // Lettura
    printf("Primo elemento: %d\n", valori[0]);  // 10
    printf("Ultimo elemento: %d\n", valori[4]); // 50

    // Modifica
    valori[2] = 99;
    printf("Dopo modifica, terzo elemento: %d\n", valori[2]); // 99

    // ⚠️ ATTENZIONE: accesso fuori dai limiti (undefined behavior!)
    // printf("%d\n", valori[10]); // PERICOLOSO! Non farlo!

    // ==============================
    // 3) DIMENSIONE DELL'ARRAY
    // ==============================
    printf("\n=== DIMENSIONE DELL'ARRAY ===\n");

    // sizeof(array) restituisce i byte totali
    // sizeof(array[0]) restituisce i byte di un elemento
    int lunghezza = sizeof(valori) / sizeof(valori[0]);
    printf("Dimensione array valori: %d elementi\n", lunghezza);
    printf("Memoria occupata: %zu bytes\n", sizeof(valori));

    // ==============================
    // 4) ITERAZIONE SU ARRAY
    // ==============================
    printf("\n=== ITERAZIONE SU ARRAY ===\n");

    int numeri_iter[6] = {2, 4, 6, 8, 10, 12};
    int dim = sizeof(numeri_iter) / sizeof(numeri_iter[0]);

    // Stampa con for
    printf("Numeri pari: ");
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", numeri_iter[i]);
    }
    printf("\n");

    // ==============================
    // 5) SOMMA ELEMENTI DI UN ARRAY
    // ==============================
    printf("\n=== SOMMA ELEMENTI ===\n");

    int dati[5] = {3, 7, 2, 9, 1};
    int somma = 0;

    for (int i = 0; i < 5; i++)
    {
        somma += dati[i];
    }
    printf("Somma degli elementi: %d\n", somma);

    // ==============================
    // 6) RICERCA DEL MASSIMO
    // ==============================
    printf("\n=== RICERCA DEL MASSIMO ===\n");

    int max = dati[0];
    for (int i = 1; i < 5; i++)
    {
        if (dati[i] > max)
        {
            max = dati[i];
        }
    }
    printf("Elemento massimo: %d\n", max);

    // ==============================
    // 7) RICERCA DEL MINIMO
    // ==============================
    printf("\n=== RICERCA DEL MINIMO ===\n");

    int min = dati[0];
    for (int i = 1; i < 5; i++)
    {
        if (dati[i] < min)
        {
            min = dati[i];
        }
    }
    printf("Elemento minimo: %d\n", min);

    // ==============================
    // 8) INVERSIONE DI UN ARRAY
    // ==============================
    printf("\n=== INVERSIONE ARRAY ===\n");

    int originale[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Array originale: ");
    for (int i = 0; i < n; i++)
        printf("%d ", originale[i]);
    printf("\n");

    // Inversione in-place
    for (int i = 0; i < n / 2; i++)
    {
        int temp = originale[i];
        originale[i] = originale[n - 1 - i];
        originale[n - 1 - i] = temp;
    }

    printf("Array invertito: ");
    for (int i = 0; i < n; i++)
        printf("%d ", originale[i]);
    printf("\n");

    // ==============================
    // 9) COPIA DI UN ARRAY
    // ==============================
    printf("\n=== COPIA ARRAY ===\n");

    int sorgente[4] = {10, 20, 30, 40};
    int destinazione[4];

    // Copia manuale
    for (int i = 0; i < 4; i++)
    {
        destinazione[i] = sorgente[i];
    }

    printf("Array sorgente: ");
    for (int i = 0; i < 4; i++)
        printf("%d ", sorgente[i]);
    printf("\n");

    printf("Array destinazione: ");
    for (int i = 0; i < 4; i++)
        printf("%d ", destinazione[i]);
    printf("\n");

    // ==============================
    // 10) ARRAY MULTIDIMENSIONALI (MATRICI)
    // ==============================
    printf("\n=== ARRAY MULTIDIMENSIONALI ===\n");

    // Matrice 3x3
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Matrice 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    // Accesso a singolo elemento
    printf("Elemento in posizione [1][2]: %d\n", matrice[1][2]); // 6

    // ==============================
    // 11) SOMMA RIGHE E COLONNE MATRICE
    // ==============================
    printf("\n=== SOMMA RIGHE E COLONNE ===\n");

    // Somma di ogni riga
    for (int i = 0; i < 3; i++)
    {
        int somma_riga = 0;
        for (int j = 0; j < 3; j++)
        {
            somma_riga += matrice[i][j];
        }
        printf("Somma riga %d: %d\n", i, somma_riga);
    }

    // Somma di ogni colonna
    for (int j = 0; j < 3; j++)
    {
        int somma_colonna = 0;
        for (int i = 0; i < 3; i++)
        {
            somma_colonna += matrice[i][j];
        }
        printf("Somma colonna %d: %d\n", j, somma_colonna);
    }

    // ==============================
    // 12) STRINGHE (ARRAY DI CHAR)
    // ==============================
    printf("\n=== STRINGHE (ARRAY DI CHAR) ===\n");

    // Le stringhe in C sono array di caratteri terminati da '\0'
    char saluto[6] = "Ciao!"; // 'C' 'i' 'a' 'o' '!' '\0'
    char nome[] = "Mario";    // dimensione automatica = 6 (5 + '\0')

    printf("Saluto: %s\n", saluto);
    printf("Nome: %s\n", nome);

    // Lunghezza stringa
    printf("Lunghezza di '%s': %zu\n", nome, strlen(nome));

    // Accesso ai singoli caratteri
    printf("Primo carattere di nome: %c\n", nome[0]);                 // 'M'
    printf("Ultimo carattere di nome: %c\n", nome[strlen(nome) - 1]); // 'o'

    // ==============================
    // 13) OPERAZIONI SU STRINGHE
    // ==============================
    printf("\n=== OPERAZIONI SU STRINGHE ===\n");

    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

    // Copia stringa
    strcpy(str3, str1);
    printf("str3 dopo strcpy: %s\n", str3); // "Hello"

    // Concatenazione
    strcat(str1, " ");
    strcat(str1, str2);
    printf("str1 dopo strcat: %s\n", str1); // "Hello World"

    // Confronto
    if (strcmp(str2, "World") == 0)
    {
        printf("str2 è uguale a 'World'\n");
    }

    // ==============================
    // 14) ARRAY COME PARAMETRI DI FUNZIONE
    // ==============================
    printf("\n=== NOTA SUGLI ARRAY COME PARAMETRI ===\n");
    printf("Gli array passati a funzioni decadono a puntatori.\n");
    printf("La funzione NON conosce la dimensione dell'array!\n");
    printf("Bisogna passare anche la dimensione come parametro.\n");

    // Esempio pratico:
    // void stampa_array(int arr[], int dim) { ... }
    // oppure:
    // void stampa_array(int *arr, int dim) { ... }

    // ==============================
    // 15) BUBBLE SORT (ORDINAMENTO)
    // ==============================
    printf("\n=== BUBBLE SORT ===\n");

    int da_ordinare[6] = {64, 34, 25, 12, 22, 11};
    int dim_ord = 6;

    printf("Array prima dell'ordinamento: ");
    for (int i = 0; i < dim_ord; i++)
        printf("%d ", da_ordinare[i]);
    printf("\n");

    // Bubble Sort
    for (int i = 0; i < dim_ord - 1; i++)
    {
        for (int j = 0; j < dim_ord - i - 1; j++)
        {
            if (da_ordinare[j] > da_ordinare[j + 1])
            {
                // Swap
                int temp = da_ordinare[j];
                da_ordinare[j] = da_ordinare[j + 1];
                da_ordinare[j + 1] = temp;
            }
        }
    }

    printf("Array dopo l'ordinamento: ");
    for (int i = 0; i < dim_ord; i++)
        printf("%d ", da_ordinare[i]);
    printf("\n");

    // ==============================
    // 16) RICERCA LINEARE
    // ==============================
    printf("\n=== RICERCA LINEARE ===\n");

    int array_ricerca[5] = {10, 23, 45, 70, 11};
    int chiave = 45;
    int trovato = -1;

    for (int i = 0; i < 5; i++)
    {
        if (array_ricerca[i] == chiave)
        {
            trovato = i;
            break;
        }
    }

    if (trovato != -1)
    {
        printf("Elemento %d trovato all'indice %d\n", chiave, trovato);
    }
    else
    {
        printf("Elemento %d non trovato\n", chiave);
    }

    // ==============================
    // 17) NOTE IMPORTANTI
    // ==============================
    printf("\n=== NOTE IMPORTANTI ===\n");
    printf("1. Gli array non controllano automaticamente i limiti!\n");
    printf("2. Accedere fuori dai limiti causa undefined behavior\n");
    printf("3. Gli array passati alle funzioni perdono la dimensione\n");
    printf("4. sizeof(array) funziona solo nello scope di dichiarazione\n");
    printf("5. Le stringhe DEVONO terminare con '\\0'\n");

    return 0;
}
