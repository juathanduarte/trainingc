#include <stdio.h>
#include <stdlib.h>

// Alocação dinâmica - Parte 1 / 2

// O operador sizeof() retorna o número de bytes necessários para alocar um único elemento de um determinado tipo de dado

struct ponto{
    int x, y;
};

int main(){
    printf("char: %d\n", sizeof(char));
    printf("int: %d\n", sizeof(int));
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
    printf("struct: %d\n", sizeof(struct ponto));

    system("pause");
    return 0;
}