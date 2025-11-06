#include <stdio.h>

/*
 * CONSEGNA:
 * Dato un dividendo (a) e un divisore (b), calcolare il quoziente (q) 
 * e il resto (r) della divisione intera. Verificare che il risultato 
 * della formula q*b+r corrisponda al dividendo originale.
 */

int main(){
    int a = 20;  // Dividendo
    int b = 7;   // Divisore

    int q = a/b; // Quoziente della divisione intera (10/4 = 2)
    int r = a%b; // Resto della divisione (10%4 = 2)
    
    // Stampa il risultato della formula: q*b+r dovrebbe essere uguale ad 'a'
    printf("risultato = %d",q*b+r);
}