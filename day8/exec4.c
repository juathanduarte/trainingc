#include <stdio.h>
#include <stdlib.h>

// Alocação Dinâmica - Parte 4 - Calloc
// Serve para alocar memória durante a execução do programa.
// Ela faz o pedido de memória ao computador e retorna um ponteiro com o endereço do início do espaço de memória alocado.
// Protótipo
// void* calloc(unsigned int num, unsigned int size)

int main(){
    //Cria um array de 50 inteiros (4 bytes cada)
    //int *v = (int*) calloc(50, 4);
    int *v = (int*) calloc(50, sizeof(int));

    //Cria um array de 200 char (1 byte cada)
    //char *c = (char*) calloc(200, 1);
    char *c = (char*) calloc(200, sizeof(char));

    system("pause");
    return 0;
}