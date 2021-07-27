#include <stdio.h>
#include <stdlib.h>

// Ponteiros - Parte 1

int main(){

    int x = 10;
    int *p = NULL; //boas práticas

    p = &x;

    printf("x = %d\n", x);

    *p = 12;

    printf("*p = %d\n", *p);
    printf("x = %d\n", x);

    system("pause");
    return 0;
}