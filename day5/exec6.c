#include <stdio.h>
#include <stdlib.h>

// Funções - Passagem por valor

void somaMaisUm(int n){
    n = n + 1;
    printf("Dentro da funcao: x = %d\n", n);
}

int main(){
    int x = 5;

    printf("Antes da funcao: x = %d\n", x);
    somaMaisUm(x);
    printf("Depois da funcao: x = %d\n", x);

    system("pause");
    return 0;
}