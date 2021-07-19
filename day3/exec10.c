#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//String - Parte 2

// strlen Tamanho da string
// strcpy Copiar uma string
// strcat Concatenar duas strings
// strcmp Comparar duas strings

int main(){
    // char palavra[20] = "Linguagem C";
    // int tamanho = strlen(palavra);

    // printf("Tamanho = %d\n", tamanho); // Tamanho da string

    //--------------------------------------------------------

    // char palavra[20] = "Linguagem C";
    // char novapalavra[30];
    // strcpy(novapalavra, palavra); // Copia uma string

    // printf("Copia = %s\n", novapalavra);


    //--------------------------------------------------------

    // char palavra1[20] = "Bom ";
    // char palavra2[30] = "dia";
    // strcat(palavra1, palavra2); //Concatena duas strings

    // printf("Palavra = %s\n", palavra1);

    //--------------------------------------------------------

    char palavra1[20] = "Linguagem C";
    char palavra2[30] = "LINGUAGEM C";

    if (strcmp(palavra1, palavra2) == 0){ //Comparar duas strings
        printf("Strings iguais!\n");
    } else {
        printf("Strings diferentes!\n");
    }

    system("pause");
    return 0;
}