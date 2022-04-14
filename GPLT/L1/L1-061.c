#include <stdio.h>

int main(void){
    float height,weight,res;
    scanf("%f %f",&weight,&height);
    res = weight / (height * height);
    printf("%.1f\n",res);
    if(res > 25)
        printf("PANG");
    else
        printf("Hai Xing");
    return 0;
}