#include <stdio.h>
#include <stdlib.h>

// malloc faz apenas alocação de memória
// calloc faz isso e coloca 0's em todos bits da memória alocada

int main(){
    int *p;
    p = (int *) calloc(5, sizeof(int));

    if(p == NULL){
        printf("Erro: Sem memoria!\n");
        exit(1); //termina o programa
    }

    int i;

    for(i = 0; i < 5; i++){
        printf("Digite p[%d]", i);
        scanf("%d", &p[i]);
    }
    //libera a memória alocada
    free(p);

    system("pause");
    return 0;
}