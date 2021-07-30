#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2;
    int i;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 < valor2){
        for (i = valor2; i >= valor1; i--){
            printf("%d\n", i);
        }
    }

    if (valor1 == valor2){
        printf("Valores iguais");
    }

    system("pause");
    return 0;
}