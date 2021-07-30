#include <stdio.h>
#include <stdlib.h>

void conversaoGraus(){

    double grausFahrenheit;
    double grausCelsius;

    printf("Digite o valor em graus Fahrenheit: ");
    scanf("%lf", &grausFahrenheit);

    grausCelsius = (grausFahrenheit - 32) * (5.0/9.0);

    printf("A conversao de %.2lf graus Fahrenheit para Celsius eh: %.2lf\n", grausFahrenheit, grausCelsius);
}


int main(){

    conversaoGraus();

    system("pause");
    return 0;
}