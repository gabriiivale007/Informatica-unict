/*
    #include <math.h>
    su GNU/Linux compilare con il flag finale -lm

    math.h
    Funzioni matematiche:

    pow(x, y)   -> double   x^y.            potenza
    sqrt(x)     -> double   √x              radice
    sin(x)      -> double   sin(x)          seno
    abs(x)      -> double   |x|             absolute
    log(x)      -> double   ln(x)           log 
    log10(x)    -> double   log10(x)        log base 10
    log2(x)     -> double   log2(x)         log base  2

*/
#include <stdio.h>
#include <math.h>

int main() {
    double x = 16.0;
    double y = 2.0;
    
    // Calcola e stampa 16^2 = 256
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x, y));
    
    // Calcola e stampa la radice quadrata di 16 = 4
    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));
    
    // Calcola e stampa il seno di 2 radianti
    printf("sin(%.1f) = %.2f\n", y, sin(y));
    
    // Calcola e stampa il valore assoluto di -5 = 5
    printf("abs(-5) = %d\n", abs(-5));
    
    // Calcola e stampa il logaritmo naturale di 16
    printf("log(%.1f) = %.2f\n", x, log(x));
    
    // Calcola e stampa il logaritmo base 10 di 16
    printf("log10(%.1f) = %.2f\n", x, log10(x));
    
    // Calcola e stampa il logaritmo base 2 di 16 = 4
    printf("log2(%.1f) = %.2f\n", x, log2(x));
}