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
    struct pessoa p;
    
    //Lendo uma estrutura aninhada do teclado
    gets(p.nome);
    scanf("%d", &p.idade);
    gets(p.ender.rua);
    scanf("%d", &p.ender.numero);

    system("pause");
    return 0;
}