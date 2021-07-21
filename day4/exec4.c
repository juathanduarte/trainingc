#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Trabalhando com STRUCT

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    //Atribuição entre estruturas

    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
    struct pessoa p2;

    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero;

    //Estruturas suportam atribuição, desde que sejam do mesmo tipo
    p2 = p;

    system("pause");
    return 0;
}