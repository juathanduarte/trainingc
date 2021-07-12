#include <stdio.h>
#include <stdlib.h>

int main(){ // Pode ser fico com todas soluções aritméticas ( + - * / % )
    int x = 10;
    int y = 10;
    int z = 2;

    x = x + z; //Soma
    printf("x = %d\n", x);

    y += z; //Soma simplificada
    printf("y = %d\n", y);

    system("pause");
    return 0;
}