#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int*) malloc(5 * sizeof(int));
    p = (int*) realloc(p, 15 * sizeof(int));

    if(p == NULL){
        printf("Erro: Sem memoria!\n");
        exit(1); //termina o programa
    }
    free(p);

    system("pause");
    return 0;
}