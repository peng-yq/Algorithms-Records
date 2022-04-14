#include <stdio.h>

struct people{
    int num;
    int call;
    int hand;
    int drink;
};

int main(void){
    int n;
    struct people A,B;
    scanf("%d %d",&A.num,&B.num);
    A.drink =0;
    B.drink = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(A.drink<=A.num && B.drink<=B.num){
            scanf("%d %d %d %d",&A.call,&A.hand,&B.call,&B.hand);
            if(A.hand == B.hand)
                continue;
            else if(A.hand == A.call + B.call)
                A.drink ++;
            else if(B.hand == A.call + B.call)
                B.drink ++;
        }
        else 
            break;      
    }
    if(A.drink > A.num)
    {
        printf("A\n");
        printf("%d\n",B.drink);
    }
    else if(B.drink > B.num)
    {
        printf("B\n");
        printf("%d\n",A.drink);
    }
    return 0;
}

//“两人同赢或两人同输则继续下一轮”这句话很关键