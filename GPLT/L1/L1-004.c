#include <stdio.h>

int main(void){
    int F, C;
    scanf("%d", &F);
    C = (5 * (F - 32))/9;
    printf("Celsius = %d",C);
    return 0;
}