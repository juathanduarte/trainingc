#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[2][1];
    int i, j;
    for(i = 0; i < 100; i++){
        for(j = 0; j < 50; j++){
            printf("Digite mat [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    system("pause");
    return 0;
}