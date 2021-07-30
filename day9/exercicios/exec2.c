#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaNumeros(int numero1, int numero2){
    int resultadoSomaNumeros;

    resultadoSomaNumeros = numero1 + numero2;

    return resultadoSomaNumeros;
}

int produtoPrimeiroQuadradoSegundo(int numero1, int numero2){
    int produtoPrimeiro;
    int quadradoSegundo;

    quadradoSegundo = numero2 * numero2;

    produtoPrimeiro = numero1 * quadradoSegundo;

    return produtoPrimeiro;
}

int quadradoPrimeiro(int numero1){
    int quadradoPrimeiro;

    quadradoPrimeiro = numero1 * numero1;

    return quadradoPrimeiro;
}

int raizQuadradaDosQuadrados(int numero1, int numero2){
    int quadradoPrimeiro;
    int quadradoSegundo;
    int somaQuadrados;
    float raizQuadrada;

    quadradoPrimeiro = numero1 * numero1;
    quadradoSegundo = numero2 * numero2;
    somaQuadrados = quadradoPrimeiro + quadradoSegundo;
    raizQuadrada = sqrt(somaQuadrados);

    return raizQuadrada;
}

int main(){
    int numero1, numero2;
    int letraA;
    int letraB;
    int letraC;
    int letraD;

    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);

    letraA = somaNumeros(numero1, numero2);
    printf("A soma dos valores eh %d\n", letraA);
    letraB = produtoPrimeiroQuadradoSegundo(numero1, numero2);
    printf("O produto do primeiro numero pelo quadrado do segundo eh %d\n", letraB);
    letraC = quadradoPrimeiro(numero1);
    printf("O quadrado do primeiro numero eh %d\n", letraC);
    letraD = raizQuadradaDosQuadrados(numero1, numero2);
    printf("A raiz quadrada da soma dos quadrados eh %d\n", letraD);

    system("pause");
    return 0;
}