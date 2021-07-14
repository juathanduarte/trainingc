#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0){
        if (num == 0){
            printf ("O numero eh igual a 0.\n");
        }
    } else {
            printf("O numero eh menor do que 0.\n");
    }

    // if (num == 0){
    //     printf("O numero digitado eh igual a 0.\n");
    // } else {
    //     if (num > 0)
    //         printf("O numero eh maior que 0.\n");
    //     else
    //         printf("O numero eh menor do que 0.\n");
    // }

    system("pause");
    return 0;
}