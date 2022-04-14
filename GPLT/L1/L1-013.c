#include <stdio.h>

int fun(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fun(n-1);
    }
}

int main(void){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=fun(i);
    }
    printf("%d",sum);
    return 0;
}