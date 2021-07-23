#include <stdio.h>
#include <stdlib.h>

// Recursão

int fatorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(){

    system("pause");
    return 0;
}