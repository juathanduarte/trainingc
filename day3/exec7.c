#include <stdio.h>
#include <stdlib.h>

//Somando um ARRAY ou MATRIZ

int main(){
    // int i, lista[5] = {1, 2, 3, 4, 5};
    // int soma = 0;

    // for(i = 0; i < 5; i++){
    //     soma = soma + lista[i];
    // }

    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    int soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        soma = soma + mat[i][j];
        }
    }
    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}