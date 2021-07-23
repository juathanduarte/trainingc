#include <stdio.h>
#include <stdlib.h>

int menu(){
    int i;

    do{
        printf("---Escolha uma opcao:\n");
        printf("(1) Opcao 1\n");
        printf("(2) Opcao 2\n");
        printf("(3) Opcao 3\n");
        scanf("%d", &i);
    } while((i < 1) || (i > 3));

    return i;
}

int main(){
    int op = menu();
    printf("Voce escolher a opcao %d\n", op);

    system("pause");
    return 0;
}