#include <stdio.h>
#include <stdlib.h>

// Alocação Dinâmica Parte 3 - MALLOC
// Serve para alocar memória durante a execução do programa.
// Ela faz o pedido de memória ao computador e retorna um ponteiro com o endereço do início do espaço de memória alocado.

int main(){

    //Cria um array de 50 inteiros (200 bytes)
    // int *v = malloc(200);
    int *v = (int*) malloc(50 * sizeof(int));

    //Cria um array de 200 char (200 bytes)
    // char *c = malloc(200);
    char *c = (char*) malloc(50 * sizeof(char));

    system("pause");
    return 0;
}