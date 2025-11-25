/*
    CICLI (LOOP) IN C

    I cicli permettono di ripetere un blocco di codice più volte.
    Esistono tre tipi principali di cicli:

    1) WHILE       - ripete finché la condizione è vera
    2) DO-WHILE    - esegue almeno una volta, poi ripete se la condizione è vera
    3) FOR         - ripete per un numero determinato di volte

    CONTROLLO DEI CICLI:
    - break     : esce immediatamente dal ciclo
    - continue  : salta all'iterazione successiva
*/

#include <stdio.h>

int main()
{

    // ==============================
    // 1) CICLO WHILE
    // ==============================
    printf("=== ESEMPIO WHILE ===\n");

    int i = 0;
    while (i < 5)
    {
        printf("Iterazione %d\n", i);
        i++; // incremento, equivalente a i = i + 1
    }

    // ==============================
    // 2) CICLO DO-WHILE
    // ==============================
    printf("\n=== ESEMPIO DO-WHILE ===\n");

    int j = 0;
    do
    {
        printf("Iterazione %d (do-while)\n", j);
        j++;
    } while (j < 5);

    // Differenza: do-while esegue ALMENO UNA VOLTA
    int k = 10;
    do
    {
        printf("Questo viene stampato anche se k >= 5: k = %d\n", k);
    } while (k < 5);

    // ==============================
    // 3) CICLO FOR
    // ==============================
    printf("\n=== ESEMPIO FOR ===\n");

    // for (inizializzazione; condizione; incremento)
    for (int n = 0; n < 5; n++)
    {
        printf("Iterazione %d (for)\n", n);
    }

    // ==============================
    // 4) BREAK - Uscire dal ciclo
    // ==============================
    printf("\n=== ESEMPIO BREAK ===\n");

    for (int m = 0; m < 10; m++)
    {
        if (m == 5)
        {
            printf("Raggiunto 5, esco dal ciclo!\n");
            break; // esce dal ciclo
        }
        printf("m = %d\n", m);
    }

    // ==============================
    // 5) CONTINUE - Saltare iterazione
    // ==============================
    printf("\n=== ESEMPIO CONTINUE ===\n");

    for (int p = 0; p < 10; p++)
    {
        if (p % 2 == 0)
        {
            continue; // salta i numeri pari
        }
        printf("Numero dispari: %d\n", p);
    }

    // ==============================
    // 6) CICLI ANNIDATI
    // ==============================
    printf("\n=== CICLI ANNIDATI ===\n");

    // Stampa una tabella di moltiplicazione 3x3
    for (int riga = 1; riga <= 3; riga++)
    {
        for (int col = 1; col <= 3; col++)
        {
            printf("%d x %d = %d\t", riga, col, riga * col);
        }
        printf("\n");
    }

    // ==============================
    // 7) ESEMPIO PRATICO: Somma numeri
    // ==============================
    printf("\n=== SOMMA DEI PRIMI 10 NUMERI ===\n");

    int somma = 0;
    for (int num = 1; num <= 10; num++)
    {
        somma += num; // equivalente a: somma = somma + num
    }
    printf("La somma dei primi 10 numeri è: %d\n", somma);

    // ==============================
    // 8) ESEMPIO PRATICO: Fattoriale
    // ==============================
    printf("\n=== FATTORIALE DI 5 ===\n");

    int numero = 5;
    int fattoriale = 1;

    for (int f = 1; f <= numero; f++)
    {
        fattoriale *= f; // equivalente a: fattoriale = fattoriale * f
    }
    printf("%d! = %d\n", numero, fattoriale);

    // ==============================
    // 9) LOOP INFINITO (da evitare!)
    // ==============================
    // while (1) {
    //     printf("Loop infinito!\n");
    //     // Per uscire serve un break
    // }

    return 0;
}
