#include <stdio.h>

int main(void){
    int n; 
    char num[7];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        scanf("%s",num);
        for(int i=0;i<3;i++)
            sum1+=num[i]-'0';
        for(int i=3;i<6;i++)
            sum2+=num[i]-'0';
        if(sum1 == sum2)
            printf("You are lucky!\n");
        else
            printf("Wish you good luck.\n");
    }
    return 0;
}