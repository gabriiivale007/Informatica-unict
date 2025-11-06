#include <stdio.h>

int main(){
    int x;
    printf("inserisci un numeor inferiore di 10\n");
    scanf("%d", &x);

    //condizione x < 10
    if(x<10){
        //se la condizione è verificata
        printf("il numero inserito è minore di 10");
    }else{
        //se la condizione non si verifica
        printf("il numero non è valido");
    }

    // costrutto if else
    //predecessore del costrutto switch
    if (x >= 10) {
        printf("il numero è maggiore o uguale a 10\n");
    } else if (x == 5) {
        printf("il numero è esattamente 5\n");
    } else if (x <= 0) {
        printf("il numero è minore o uguale a 0\n");
    } else {
        printf("nessuna delle condizioni precedenti è verificata\n");
    }

    //costrutto switch

    switch (x) {
    case 0:
        printf("caso 0\n");
        break;
    case 1:
        printf("caso 1\n");
        break;
    case 2:
        printf("caso 2\n");
        break;
    case 3:
        printf("caso 3\n");
        break;
    case 4:
        printf("caso 4\n");
        break;
    case 5:
        printf("caso 5\n");
        break;
    case 6:
        printf("caso 6\n");
        break;
    case 7:
        printf("caso 7\n");
        break;
    case 8:
        printf("caso 8\n");
        break;
    case 9:
        printf("caso 9\n");
        break;
    default:
        printf("default: nessun caso da 0 a 9 corrisponde\n");
        break;
    }
}
