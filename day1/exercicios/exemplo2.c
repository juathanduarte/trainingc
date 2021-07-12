#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, y, tabuada;

    for (i = 1; i <= 9; i++){
        for (y = 1; y <= 10; y++){
            tabuada = y * i;
            printf("%d * %d: %d\n", y, i, tabuada);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}