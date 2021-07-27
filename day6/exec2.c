#include <stdio.h>
#include <stdlib.h>

// Ponteiros - Parte 2 | Operações

int main(){
    // Só é possível somar e subtrair valores INTEIROS de um ponteiro.
    // Ponteiros podem ser comparados usando a lógica == != > < ...

    // int *p = 0X5DC; //1500
    // printf("p = %d\n", p);
    // p++;
    // printf("p = %d\n", p);
    // p = p + 15;
    // printf("p = %d\n", p);
    // p = p - 2;
    // printf("p = %d\n", p);

    int *p = NULL;
    int *p1 = NULL;
    int x;
    int y;

    p = &x;
    p1 = &y;

    if (p > p1){
        printf("p > p1\n");
    } else {
        printf("p <= p1\n");
    }

    system("pause");
    return 0;
}