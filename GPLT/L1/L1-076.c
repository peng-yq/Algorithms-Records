#include <stdio.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        float temp;
        scanf("%f",&temp);
        if(temp < m)
            printf("On Sale! %.1f\n",temp);
    }
    return 0;
}