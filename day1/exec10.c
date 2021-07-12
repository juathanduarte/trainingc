#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Digite um valor:");
    scanf("%d", &valor);

    if(valor > 0){
        printf ("O valor eh positivo!\n");
    } else {
        printf ("O valor eh negativo!\n");
    }
    system("pause");
    return 0;
}