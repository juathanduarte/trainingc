#include <stdio.h>
#include <stdlib.h>

int main(){
    int metros;
    float decimetros, centimetros, milimetros;
    printf("Digite o valor em metros:");
    scanf("%d", &metros);

    decimetros = metros / 0.10000;
    printf("Valor em Decimetros: %.2f\n", decimetros);

    centimetros = metros * 100; 
    printf("Valor em Centimetros: %.2f\n\n", centimetros);

    milimetros = metros / 0.0010000;
    printf("Valor em Milimetros: %f\n\n", milimetros);

    system("pause");
    return 0;
}