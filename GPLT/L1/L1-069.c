#include <stdio.h>

int main(void){
    int tire[6],count=0,max=0,id;
    for(int i=0;i<6;i++){
        scanf("%d",&tire[i]);
        if(tire[i] > max && i<4)
            max = tire[i];
    }
    for(int i=0;i<4;i++){
        if(tire[i] < tire[4] || max - tire[i] > tire[5]){
            id = i+1;
            count ++;
        }
        if(count >= 2){
            printf("Warning: please check all the tires!");
            break;
        }
    }
    if(count == 1)
        printf("Warning: please check #%d!",id);
    else if(count == 0)
        printf("Normal");
    return 0;
}