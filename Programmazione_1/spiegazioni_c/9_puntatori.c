#include <stdio.h>

int main() {



    //*RICORDARE SEMPRE
    //! PER UN PUNTATORE (*ptr) indica i valori mentre (ptr) gli indirizzi
    
    int x = 0; //variabile
    //il segno & mi permette di avere l'indirizzo di una qualsiasi variabile e mi permette di estrarre l'indirizzo della variabile
    int *ptr = &x; //nel puntyatore memorizzo l'indirizzo di dove viene allocata la variabile
    ptr = &x; //vado ad assegnare l'indirizzo
    *ptr = 5; //vado a cambiare il valore di dove si punta
    
    //la stampa
    //valore contenuto dal puntatore
    printf("%d", *ptr);

    //indirizzo del puntatore
    printf("indirizzo puntatore: %p", ptr);


    /*
    Metodo di accesso                       | Esempio
    ---------------------------------------|---------
    Nome array e []                        | v[2]
    Puntatore e []                         | ptr[2]
    Nome array e aritmetica dei puntatori  | *(v + 2)
    Puntatore e aritmetica dei puntatori   | *(ptr + 2)

    Nota: per la "aritmetica dei puntatori" l'incremento/decremento si muove
            di un "elemento" (cioè sizeof(tipo) bytes).
    */

    //puntatori negli array
    double v[] = {1.2, 4.3, 7.8}; //il nome di una array in questo caso v è sempre un puntaroe al primo elemento della array

    //stampiamo l'indirizzo della prima cella 
    printf("\n\n%p", v);

    //stampo il valore della seconda cella usando un puntatore
    //assumo l'indirizzo dell'array
    double *ptr_v = v;

    //stampo la seconda cella
    printf("\n\n\n%f", ptr_v[1]);

    //stampiamo il terzo elemento
    //ma con l'aritmetica dei puntatori
    printf("\n\n\n%f", *(ptr_v+2));

    //ma potremmi anche fare così
    printf("\n\n\n%f", *(++ptr_v)); //(++ptr/--ptr) in questo caso prima incrementa e poi legge
    printf("\n\n\n%f", *(ptr_v++)); //(ptr++/ptr--) qui abbimao prima una lettura e poi un incremento



    
    return 0;
}