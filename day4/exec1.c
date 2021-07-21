#include <stdio.h>
#include <stdlib.h>

//Struct - Parte 1
struct pessoa{
    char nome[50], rua [50];
    int idade, numero;
};

int main(){
    //declaração de uma variável sctruct
    struct pessoa p;

    //Cada campo da struct pode ser acessado usando o operador "."

    p.idade = 31; //comando de atribuição
    scanf("%d", &p.numero); //comando de leitura
    gets(p.nome); //comando de leitura
    p.numero = p.numero + p.idade - 100; //expressão

    system("pause");
    return 0;
}