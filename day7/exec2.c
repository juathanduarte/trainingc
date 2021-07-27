#include <stdio.h>
#include <stdlib.h>

// Ponteiros para ponteiros
// A quantidade de * na declaração do ponteiro indica o número de níveis do ponteiro.

int main(){
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    // Endereço em p2
    printf("p2: %d\n", p2); // &p
    // Conteudo do endereço
    printf("*p2: %d\n", *p2); //&x
    // Conteudo do endereço do endereço
    printf("**p2: %d\n", **p2); //x

    system("pause");
    return 0;
}