#include <stdio.h>

struct record
{
    int x;
    char *ptr;
    //char s[20];
    double y;
};

int main() {
    
    struct record myRecord = {};
    struct record myRecord1 = {20, "pippo", 34.5};
    struct record myRecord2 = {.y=10, .ptr="pippo", .x=34.5};

    myRecord2.x = 345; //accesso al campo 2

    struct record *ptrRecord = malloc(sizeof(struct record));
    //deferenzazione del puntatore
    (*ptrRecord).ptr = malloc(sizeof(char)*10);

    //operatore freccia
    ptrRecord -> y = 123.456;

    return 0;

}