#include <stdio.h>

int main(void){
    int h,m,i;
    scanf("%d:%d",&h,&m);
    if(h>=0&&h<=12){
        printf("Only %02d:%02d.  Too early to Dang.",h,m);
    }
    else{
        if(m){
            h+=1;
        }
        for(i=0;i<h-12;i++){
            printf("Dang");
        }
    }
    return 0;
}