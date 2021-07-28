#include <stdio.h>
#include <stdlib.h>

// Alocação Dinâmica Parte 6 - Alocação de Matrizes

int main(){

    // Ponteiro [1 nível]: cria um vetor 
    int *p = (int*) malloc(5 * sizeof(int));

    // Ponteiro para ponteiro [2 níveis]: cria uma matriz
    int **m;

    // Ponteiro para ponteiro para ponteiro [3 níveis]: cria um array de 3 dimensões
    int ***d;
    
    system("pause");
    return 0;
}