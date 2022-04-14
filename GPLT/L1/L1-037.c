#include <stdio.h>

int main(void){
    int n1,n2;
    float res;
    scanf("%d %d",&n1,&n2);
    if(n2!=0){
        res = (float)(n1)/n2;
        if(n2 < 0)
            printf("%d/(%d)=%.2f",n1,n2,res);
        else
           printf("%d/%d=%.2f",n1,n2,res); 
    }
    else
        printf("%d/0=Error",n1);
    return 0;
}