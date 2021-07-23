#include <stdio.h>
#include <stdlib.h>

// Corpo de uma função

int fatorial(int n){
    int i;
    int f = 1;
    
    for(i = 1; i <= n; i++){
        f = f * i;
    }

    return f;
}

int main(){
    int x, y;
    printf("Digite n: ");
    scanf("%d", &x);
    y = fatorial(x);
    printf("fatorial de n = %d\n", y);

    system("pause");
    return 0;
}