#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Trabalhando com STRUCT

struct pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(){
    //Inicializando uma estrutura

    //Podemos definir uma lista de valores para colocar na estrutura (como arrays)
    struct pessoa p = {"Ricardo", "Rua 1", 31, 101};

    //Campos não defeinidos são inicializados com zero ou com uma string vazia
    struct pessoa b = {"Ricardo", "Rua 1", 31};

    system("pause");
    return 0;
}