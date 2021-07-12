#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra = 'i';
    int nro = 10;
    float n = 5.25;

    printf("Meu programa C\n");
    printf("%c \n", letra);
    printf("%d \n", letra); // Dentro da tabela ASC
    printf("%d \n", nro);
    printf("%.2f \n", n);  

    printf("Letra %c, inteiro %d.\n", letra, nro);

    system ("pause");
    return 0;
}