#include <stdio.h>
#include <stdlib.h>

// Recursão - PT 2

int fatorial(int n){
    if(n == 0){ // critério de parada
        return 1;
    } else { // parâmetro de chamada recursiva
        return n * fatorial(n - 1);
    }
}

int main(){
    int x = fatorial(4);

    system("pause");
    return 0;
}