#include <stdio.h>

int main(void){
    int n,height[2]={129,130},weight[2]={25,27};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int sex, h, w;
        scanf("%d %d %d",&sex,&h,&w);
        if(h > height[sex])
            printf("ni li hai! ");
        else if(h < height[sex])
            printf("duo chi yu! ");
        else 
            printf("wan mei! ");
        if(w > weight[sex])
            printf("shao chi rou!\n");
        else if(w < weight[sex])
            printf("duo chi rou!\n");
        else 
            printf("wan mei!\n");
    }
    return 0;
}