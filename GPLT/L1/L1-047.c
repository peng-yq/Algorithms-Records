#include <stdio.h>

struct people{
    char name[4];
    int h;
    int m;
};

int main(void){
    int n;
    scanf("%d",&n);
    struct people p;
    for(int i=0;i<n;i++){
        scanf("%s %d %d",p.name,&p.h,&p.m);
        if(p.h<15 || p.h >20 || p.m<50 ||p.m>70)
            printf("%s\n",p.name);
    }
    return 0;
}