#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *) malloc(5 * sizeof(int));

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