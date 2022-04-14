#include <stdio.h>

int main(void){
    int n,i,num,j=0,o=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num%2){
            j++;
        }
        else{
            o++;
        }
    }
    printf("%d %d",j,o);
}