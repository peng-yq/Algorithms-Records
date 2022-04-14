#include <stdio.h>
#include <math.h>

void fun(int n){
    int i,flag=0;
    if(n==1){
        printf("No\n");
    }
    else {
        for(i=2;i<=sqrt(n);i++){
        if(n%i==0 && n!=2){
            flag=1;
            printf("No\n");
            break;
        }
    }
        if(!flag){
            printf("Yes\n");
        }
    }   
}

int main(void){
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        fun(num[i]);
    }
    return 0;
}

//坑就是1不是素数，2是素数