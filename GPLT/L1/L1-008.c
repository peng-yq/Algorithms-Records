#include <stdio.h>

int main(void){
    int sum=0,i,j,k,count=0;
    scanf("%d %d",&j,&k);
    for(i=j;i<=k;i++){
        sum+=i;
        count++;
        printf("%5d",i);
        if(count%5==0){
            printf("\n");
        }
    }
    if(count%5!=0){
        printf("\n");
    }
    printf("\nSum = %d",sum);
    return 0;
}