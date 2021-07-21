#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aninhamento de Structs

// Uma estrutura também é um tipo de dado. Logo, uma estrutura pode possuir uma variável do tipo de outra estrutura previamente definida.
// A isso chamamos de ESTRUTURAS ANINHADAS

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main(){
    //Uma estrutura pode agrupar variáveis de tipos diferentes.
    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101;

    system("pause");
    return 0;
}