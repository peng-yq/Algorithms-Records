#include <stdio.h>
#include <math.h>

int main(void){
    int count=0,first,i;
    long int n,temp;
    scanf("%ld",&n);
    for(i=2;i<sqrt(n)+1;i++){
        int j;
        temp = 1;
        for(j=i;j<sqrt(n)+1;j++){
            temp *=j;
            if(n%temp!=0)
                break;
        }
        if(j-i>count){
            count = j-i;
            first = i;
        }
    }
    if(count==0){
        printf("1\n");
        printf("%d",n);
    }
    else{
        printf("%d\n",count);
        for(i=0;i<count;i++){
            printf("%ld",(first+i));
            if(i!=count-1)
                printf("*");
        }
    }
    return 0;
}

//柳神yyds，https://www.liuchuo.net/archives/2110