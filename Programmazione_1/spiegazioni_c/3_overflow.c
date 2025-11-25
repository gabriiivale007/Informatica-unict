#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int x = INT_MAX;
    long y = 1000;

    // ESEMPIO DI OVERFLOW
    printf("x+y=%d",x+y);
    
    // ESEMPIO DI ERRORE 
    printf("\n 1/0=%d", 1/0);

    // ESEMPIO CON VIRGOLA MOBILE
    printf("\n 1/0.0=%f", 1/0.00); //risultato INF (overflow)

    //ESEMPI
    printf("\n DBL_MAX * 10000 = ", DBL_MAX  * 10000); //risultato INF
    printf("0.0/0.0=%f", 0.0/0.0); //risultato nan
    printf("DBL_MIN-100=%f", DBL_MIN-100); //risultato 0.00000
    

}