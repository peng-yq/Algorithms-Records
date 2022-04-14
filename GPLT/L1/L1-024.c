#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    if(n<=5){
       printf("%d\n",(n+2)); 
    }
    else{
       printf("%d\n",((n+2)%7));   
    }
    return 0;
}