#include <stdio.h>
#include <stdlib.h>

int main(){
    // char letra;
    int nro;
    float f;
    // double d;

    // scanf("%c", &letra);
    // scanf("%d", &nro);
    // scanf("%f", &n);
    // scanf("%d", &d);

    printf("Digite dois numeros: ");
    scanf("%d%f", &nro, &f);
    printf("Numeros: %d e %.2f", nro, f);

    system("pause");
    return 0;
}