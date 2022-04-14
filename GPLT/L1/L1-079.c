#include <stdio.h>

int main(void){
    long int n,min=0,max=0,min_num,max_num=0;
    scanf("%ld",&n);
    long int num[n];
    for(long int i=0;i<n;i++){
        scanf("%ld",&num[i]);
        if(i==0)
            min = num[i];
        if(num[i]<min)
            min = num[i];
        if(num[i]>max)
            max = num[i];
    }
    for(long int i=0;i<n;i++){
        if(num[i]==min)
            min_num++;
        if(num[i]==max)
            max_num++;
    }
    printf("%ld %ld\n",min,min_num);
    printf("%ld %ld",max,max_num);
    return 0;
}