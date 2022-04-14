#include <stdio.h>
#include <stdlib.h>

struct people{
    char name[9];
    int num;
};

int main(void){
    int n,sum=0,avg,num=0,min;
    scanf("%d",&n);
    struct people p[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",p[i].name,&p[i].num);
        sum+=p[i].num;
    }
    avg = sum / n /2;
    min = abs(p[0].num - avg);
    for(int i=0;i<n;i++){
        if(abs(p[i].num - avg) < min){
            min = abs(p[i].num - avg);
            num = i;
        }
    }
    printf("%d %s",avg,p[num].name);
    return 0;
}