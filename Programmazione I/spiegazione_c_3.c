#include <stdio.h>
#include "flush_stdin.h" // il file header
// si trova nella directory di lavoro

#define SIZE 6

/*   Primo uso di scanf().
Approccio per consumare i caratteri eventuaili rimasti
i nel buffer di input.
*/

// sscanf ci aiuta ad anticipare e sapere in futoru se al momente dell'inserimento sia int, char, float ecc...

// getline() ci ritorna il puntatore cioè l'indirizio di memoria della variabile o cella di memoria e ristuire i numero di caratteri letti.

// il puntatore si indica *

// per compilarlo: gcc 8_04_scanf_C.c flush.c
int main(){
    
    // condizioni if / else
    int a = 1;

    if (a == 1){
        printf("a è 1");
    }
    else{
        printf("negro");
    }


    // condizioni if / else if / else

    if (a==1){
        printf("Okay cia fa");
        a+=2;
    }
    else if (a< 0){
        printf("porco dio");
    }

    else{
        printf("coglione porco dio");
    }

}


#define IT 2
#define FR 10

#define CT 10
#define PR 20

int main(){


    int paese = IT;
    int provincia = CT;


    double costo = 10.0;
    if(paese==IT){
        if(provincia == CT){
            printf("porco dio cambia provincia");
        }
    }

}

// altro esempio if/else elaborato

// minini eserciaio operatori di condizione

int main(){

    int a = 10, b = 20, c = 15;

    int x = (a>b ? (a > c ? a : c ) : (b > c ? b : c));
}

// switch case 

int main (){

    int a = 3;

    switch (a)
    {
    case 1:
        printf("Ciao questo è il caso 1");
        break;
    case 2: 
        printf("Ciao bro quesoto è il caso 2");
        break;
    case 3:
        printf("Ciao bro mi sono rotto il cazzo caso 3");
        break;
    default:
        break;
    }
    
    // in caso di assenza del break lui azziona ogni case cio caso
}