#include <stdio.h>
#include <stdlib.h>

// Funções - Struct como parâmetro

struct ponto{
    int x, y;
};

void imprimeValor(int n){
    printf("Valor = %d \n", n);
}

// Por referência
void somaImprimeValor(int *n){
    *n = *n + 1;
    printf("Valor = %d \n", *n);
}

void atribui (struct ponto *p){
    p -> x = 10;
    p -> y = 20;
}

int main(){
    // struct ponto p1 = {10, 20};
    // imprimeValor(p1.x);
    // imprimeValor(p1.y);
    // somaImprimeValor(&p1.x);
    // somaImprimeValor(&p1.y);

    struct ponto p1;
    atribui(&p1);
    printf("x = %d\n", p1.x);
    printf("y = %d\n", p1.y);

    system("pause");
    return 0;
}