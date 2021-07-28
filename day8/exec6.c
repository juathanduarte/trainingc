#include <stdio.h>
#include <stdlib.h>

// Alocação Dinâmica - Parte 5 - Realloc
// Serve para alocar ou realocar memória durante a execução do programa.
// Ele faz o pedido de memória ao computador e retorna um ponteiro com o endereço de início do espaço de memória alocado.

// Protótipo:
// void* realloc(void* ptr, unsigned int num);

int main(){

    // Cria um array de 50 inteiros (200 bytes)
    //int *v = (int*) malloc(200);
    int *v = (int*) malloc(50 * sizeof(int));

    // Aumenta a memória alocada para 100 inteiros
    //v = (int*) realloc(v, 400);
    v = (int*) realloc(100 * sizeof(int));

    system("pause");
    return 0;
}