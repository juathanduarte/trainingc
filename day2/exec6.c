#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    for(c = a; c <= b; c++){
        printf("%d\n", c);
    }

    system("pause");
    return 0;
}