#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Trabalhando com STRUCT e ARRAY juntos

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    struct pessoa p[4];
    p[0].idade = 31;
    strcpy(p[1].nome, "Ricardo");
    p[2].numero = p[0].numero -1;

    system("pause");
    return 0;
}