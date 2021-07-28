#include <stdio.h>
#include <stdlib.h>

// Em um ponteiro para ponteiro, cada nível do ponteiro permite criar uma nova dimensão do array

int main(){

    int **p;
    int i, j, N = 2;

    p = (int**) malloc(N * sizeof(int*));

    for(i = 0; i < N; i++){
        p[i] = (int*) malloc(N * sizeof(int));
        for (j = 0; i < N; j++){
            scanf("%d", &p[i][j]);
        }
    }
    free(p);
    
    system("pause");
    return 0;
}