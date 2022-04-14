#include <stdio.h>

int main(void){
    int n;
    float sum =0,res;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        float temp;
        scanf("%f",&temp);
        sum += 1.0 / temp;
    } 
    res = 1 / (sum / n);
    printf("%.2f",res);
    return 0;  
}