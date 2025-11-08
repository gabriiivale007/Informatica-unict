
/*
* Codificare un programma in C che chiede all’utente di inserire un
* carattere. Il programma dovr`a dare il seguente output:
* • Se il carattere `e una vocale minuscola, stampa il numero che
* rappresenta la sua codifica;
* • Se il carattere `e una vocale maiuscola, stampa il carattere
* stesso sullo standard output;
* • Se il carattere rappresenta un numero compreso tra 1 e 3,
* stampa il numero stesso moltiplicato per 10;
 */

 #include <stdio.h>
 
 int main() {
    char lettera;
    int codifica;
    printf("dammi una vocale o un numero da 1 a 3");
    scanf("%c", &lettera);

    switch (lettera) {
    //scrivo tutte le casistiche possibili e seguo le istruzioni su cosa stampare in output
    case 'a':
        printf("lettera %c codificata in %d", lettera, (int)lettera);
        break;

    case 'e':
        printf("lettera %c codificata in %d", lettera, (int)lettera);
        break;

    case 'i':
        printf("lettera %c codificata in %d", lettera, (int)lettera);
        break;

    case 'o':
        printf("lettera %c codificata in %d", lettera, (int)lettera);
        break;

    case 'u':
        printf("lettera %c codificata in %d", lettera, (int)lettera);
        break;

    case 'A':
        printf("lettera %c", lettera);
        break;

    case 'E':
        printf("lettera %c", lettera);
        break;

    case 'I':
        printf("lettera %c", lettera);
        break;

    case 'O':
        printf("lettera %c", lettera);
        break;

    case 'U':
        printf("lettera %c", lettera);
        break;

    case '1':
        printf("%d", 1 * 10);
        break;

    case '2':
        printf("%d", 2 * 10);
        break;

    case '3':
        printf("%d", 3 * 10);
        break;

    default:
        printf("non hai inserito ne una vocale ne un numero valido");
        break;

    }
    return 0;
 }