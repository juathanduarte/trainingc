#include <stdio.h>
#include <stdlib.h>

int main(){
    // int a, b;

    // printf("Digite dois valores inteiros: ");
    // scanf("%d %d", &a, &b);

    // do{
    //     printf("%d\n", a);
    //     a++;
    // } while (a < b && a > 0);

    int i;
    
    do{
        printf("Escolha uma opcao:\n");
        printf("Opcao 1\n");
        printf("Opcao 2\n");
        printf("Opcao 3\n");
        scanf("%d", &i);
    } while((i < 1) || (i > 3));

    printf("Voce escolher a opcao %d\n", i);

    system("pause");
    return 0;
}