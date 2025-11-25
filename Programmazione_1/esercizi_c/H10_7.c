/*
*Estendere l’esercizio precedente in modo da conservare tutti i
*caratteri in un array di caratteri. Infine, stampare la lunghez-
*za della stringa contenuta in esso con la funzione di libreria
*strlen.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int N = 27;

    char alph[N], alph2[N];

    // Riempio alph con le lettere da 'a' a 'z', sostituendo le vocali con 'N'
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            alph[i] = c;
        } else {
            alph[i] = 'N';
        }
    }
    alph[26] = '\0';

    
    // Lo stesso con un while: attenzione alla condizione e all'incremento
    int i = 0;
    while (i < 26) {
        char c = 'a' + i;
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            alph2[i] = c;
        } else {
            alph2[i] = 'N';
        }
        i++;
    }
    alph2[26] = '\0';


    printf("\nCICLO FOR\nAlfabeto:\n");
    for(int i=0; i < strlen(alph); i++){
        printf("%c,", alph[i]);
    }
    
    i = 0;
    printf("\n\nCICLO WHILE\nAlfabeto:\n");
    while (i < strlen(alph2))
    {
        printf("%c,", alph2[i]);
        i++;
    }
}