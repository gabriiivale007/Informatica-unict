#include <stdio.h>
#include <string.h>

int main() {
    
    char s1[20]; //carattere fine stringa \0

    //dimesnionse s: 6 char
    char s2[] = {'p','i','p','p','o', 0};
    char s3[] = "pippo"; //array
    char *ptr = "paperino"; //read only
    
    s3[2] = 'x';
    printf("%s", s3);

    ptr[2] = 'x';
    printf("ptr = %s", ptr);

    //allocazione dinamica
    char *ptr1 = malloc(sizeof(char)*20);

    //nessun limite di dimensione
    strcpy(ptr1, "paperino");
    //ci obbliga a mettere la dimensione
    strncpy(ptr1, "paperino",19);


    //strcmp
    if(strcmp(ptr1, "pippo") == 0){
        printf("sono la stessa parola");
    }

    //strstr
    char *found = strstr(ptr1, "rin");
    if(found) {
        printf("sottostringa trovata: %s\n", found);
    } else {
        printf("sottostringa non trovata\n");
    }
    return 0;
}