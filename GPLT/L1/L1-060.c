#include <stdio.h>

int main(void){
    int x,y,n;
    scanf("%d %d",&x,&y);
    n = 5000 - (100-x+y)*50;
    printf("%d\n",n);
    return 0;
}