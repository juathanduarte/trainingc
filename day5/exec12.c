#include <stdio.h>
#include <stdlib.h>

// Recursão - Soma até N

int soma(n){
    if (n == 0){
        return 0;
    } else {
        return n + soma(n - 1);
    }
}

int main(){
    soma(n) = n + soma(n - 1); // geral
    soma(0) = 0; // caso base

    system("pause");
    return 0;
}