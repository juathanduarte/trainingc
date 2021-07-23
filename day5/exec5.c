#include <stdio.h>
#include <stdlib.h>

// Retorno de uma função

void imprime(int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("Linha %d\n", i);
    }
}

int soma(int x, int y){
    return x + y;
}

int maior(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}

int main(){
    imprime(5);

    int x = soma(4,5);
    printf("x = %d\n", x);
    printf("soma = %d\n", soma(2, 3));

    int y = maior(4, 5);
    printf("maior = %d\n", y);

    system("pause");
    return 0;
}