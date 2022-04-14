#include <stdio.h>
#include <math.h>

int main(void){
    int n,i;
    float h,w,bw;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f",&h,&w);
        bw = (h-100)*0.9;
        if(fabs(w/2-bw) < bw*0.1)
            printf("You are wan mei!\n");
        else if(w/2 > bw)
            printf("You are tai pang le!\n");
        else  
            printf("You are tai shou le!\n");
    }
    return 0;
}

//abs()函数头文件为stdlib.h，用于求整数的绝对值；fbs()函数头文件为math.h，用于求浮点数的绝对值