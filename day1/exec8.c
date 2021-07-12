#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int y = 10;
    // x++; // x = x + 1
    // ++y; // y = y + 1
    x--; // x = x - 1
    --y; // y = y - 1
    
    printf("x = %d \n", x);
    printf("y = %d \n", y);

    system("pause");
    return 0;
}