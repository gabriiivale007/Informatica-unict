/*
    Esercizio sul calcolo del tasso di interrese attraverso dei parametri come:
    Capitale , Target di arrivo, tasso d'interresse, e hanno in cui si vuole raggiungere


    tutto questo con l'uso dei cicli while
*/

#include <stdio.h>

int main(){

    double c, t, ti;
    int n;

    printf("Inserisci i capitale, target, tasso interresse, anno : ");
    scanf("%lf %lf %lf %d", &c, &t, &ti, &n);

    fflush(stdout); // scarica tutti i byte dello stdout

    printf("Valori : capitale = %.2f, target = %.2f, tasso interresse = %2.f, anno = %d", c, t, ti, n);

    if (t <= 0 && n<= 0) {
        fprintf(stderr, "\n ERRORE, Target %f, N %d\n", t, n);

        return -1;
    }

    // montante dopo n anni
    if (t <= 0){
        unsigned short i = 0;
        while (i<n){
            c+=c*ti;
            i++;
        }
        printf("\n1)  c = %f, n = %d", c,n);
        
    }
    // montante dopo n anni calcolati
    else if (n<=0){
        n = 0;
        // accumulare interessi
        // finchè c raggiunga o superi
        // target 
        while (c<t){
            c+=c*ti;
            n++;
        }
        printf("\n2) c = %f, n = %d", c,n);
        
    }

    else{ // n>0 AND target>0
        unsigned short i = 0;
        while(c<t && i<n){
            c+=c*ti;
            i++;
        }
        printf("\n3)c = %f, i = %hu n = %d", c, i, n);

    }
}    