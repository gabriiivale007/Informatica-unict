
/*
   Esempi su generazione di numeri pseudo-casuali in C

   Contenuti:
   - rand() e srand()
   - inizializzazione con time(NULL)
   - generare numeri interi in un range [a,b]
   - generare numeri float in [0,1)
   - attenzione al bias quando si usa '%%'
   - Fisher-Yates shuffle per mescolare un array

   Compilare con: gcc -o 8_random 8_random.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Restituisce un intero casuale uniformemente distribuito nell'intervallo [min, max]
int rand_int_range(int min, int max) {
	// versione semplice: attenzione al bias se (max-min+1) non divide RAND_MAX+1
	return min + rand() % (max - min + 1);
}

// Restituisce un double casuale nell'intervallo [0,1)
double rand_double() {
	return (double)rand() / ((double)RAND_MAX + 1.0);
}

// Esegue il Fisher-Yates shuffle su un array di interi di lunghezza n
void shuffle(int *a, int n) {
	for (int i = n - 1; i > 0; i--) {
		int j = rand_int_range(0, i); // indice casuale tra 0 e i
		// scambia a[i] e a[j]
		int tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

int main() {
	// ==========================
	// 1) Inizializzazione
	// ==========================
	printf("=== INIZIALIZZAZIONE ===\n");
	// Senza chiamare srand la sequenza è sempre la stessa ad ogni esecuzione
	srand((unsigned int)time(NULL)); // inizializza il generatore con il tempo corrente

	// ==========================
	// 2) rand() base
	// ==========================
	printf("=== rand() ===\n");
	for (int i = 0; i < 5; i++) {
		printf("rand() = %d\n", rand());
	}

	// ==========================
	// 3) interi in un range [a,b]
	// ==========================
	printf("\n=== interi in range [a,b] ===\n");
	for (int i = 0; i < 10; i++) {
		int r = rand_int_range(1, 6); // simuliamo un dado 1..6
		printf("dado: %d ", r);
	}
	printf("\n");

	// ==========================
	// 4) double in [0,1)
	// ==========================
	printf("\n=== double in [0,1) ===\n");
	for (int i = 0; i < 5; i++) {
		printf("%.6f\n", rand_double());
	}

	// ==========================
	// 5) Bias con l'operatore modulo
	// ==========================
	printf("\n=== Esempio bias con modulo ===\n");
	// Contiamo la frequenza dei risultati di rand()%%10 su molte estrazioni
	int counts[10] = {0};
	int trials = 100000;
	for (int i = 0; i < trials; i++) {
		counts[rand() % 10]++;
	}
	printf("Frequenze per rand()%%10 (prime 10 estrazioni):\n");
	for (int i = 0; i < 10; i++) {
		printf("%d: %d\n", i, counts[i]);
	}
	printf("(Nota: con RAND_MAX non multiplo di 10 può esserci un leggero bias)\n");

	// ==========================
	// 6) Fisher-Yates shuffle
	// ==========================
	printf("\n=== Fisher-Yates shuffle ===\n");
	int arr[10];
	for (int i = 0; i < 10; i++) arr[i] = i + 1;

	printf("Array originale: ");
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");

	shuffle(arr, 10);

	printf("Array mescolato: ");
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");

	// ==========================
	// 7) Nota su random criptografico
	// ==========================
	printf("\n=== Nota su random criptografico ===\n");
	printf("rand()/srand() non sono adatti per scopi crittografici. Per sicurezza usare API specifiche del sistema.\n");

	return 0;
}

