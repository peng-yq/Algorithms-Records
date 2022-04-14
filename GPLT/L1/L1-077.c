#include <stdio.h>

int main(void){
    int mood[24];
    for(int i=0;i<24;i++)
        scanf("%d",&mood[i]);
    while(1){
        int id;
        scanf("%d",&id);
        if(id<0||id>23)
            break;
        else{
            printf("%d ",mood[id]);
            if(mood[id]>50)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}