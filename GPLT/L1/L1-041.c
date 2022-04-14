#include <stdio.h>

int main(void){
    int i=0,n;
    for(i=0;;i++){
        scanf("%d",&n);
        if(n==250)
            break;
    }
    printf("%d",i+1);
    return 0;
}