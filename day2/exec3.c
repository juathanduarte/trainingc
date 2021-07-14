#include <stdio.h>
#include <stdlib.h>

// variavel = condição ? expressão1 : expressão

int main(){
    int x, y, z;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: "); 
    scanf("%d", &y);
    
    // z = x > y ? x : y;

    // printf("Maior = %d\n", z);

    (x > y) ? printf("X eh o maior.\n")
            : printf("Y eh o maior.\n");

    system("pause");
    return 0;
}