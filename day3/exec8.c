#include <stdio.h>
#include <stdlib.h>

//Maior valor de um ARRAY ou MATRIZ

int main(){
    // int lista[5] = {3, 18, 2, 51, 45};
    // int i;
    // int maior = lista[0];

    // for(i = 1; i < 5; i++){
    //     if (lista[i] > maior){
    //         maior = lista[i];
    //     }
    // }

    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    int maior = mat[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    printf("Maior = %d\n", maior);

    system("pause");
    return 0;
}