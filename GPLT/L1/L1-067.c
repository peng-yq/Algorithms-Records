#include <stdio.h>

int main(void){
    float mul[2]={2.455, 1.26};
    float n1,n3;
    int n2;
    scanf("%f %d %f",&n1,&n2,&n3);
    if(n1 * mul[n2] < n3)
        printf("%.2f ^_^",n1 * mul[n2]);
    else
        printf("%.2f T_T",n1 * mul[n2]);
    return 0;
}