#include <stdio.h>
#include <stdlib.h>

//String - Parte 1

int main(){
    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    //gets(palavra);

    printf("Palavra lida: %s\n", palavra);
    
    system("pause");
    return 0;
}