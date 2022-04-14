#include <stdio.h>

int main(void){
    int pa,pb,p[3],la=0,lb=0;
    scanf("%d %d",&pa,&pb);
    for(int i=0;i<3;i++){
        scanf("%d",&p[i]);
        if(p[i]==1)
            lb++;
        else
            la++;
    }
    if(pa>pb && la >= 1)
        printf("The winner is a: %d + %d",pa,la);
    else if(pa<pb && la == 3)
        printf("The winner is a: %d + %d",pa,la);
    else
        printf("The winner is b: %d + %d",pb,lb);
    return 0;
}