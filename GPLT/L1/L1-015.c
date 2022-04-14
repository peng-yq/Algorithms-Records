#include <stdio.h>

int main(void){
    int i,j;
    float n;
    char c;
    scanf("%f %c",&n,&c);
    for(i=0;i<(int)(n/2.0+0.5);i++){
        for(j=0;j<n;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
//此题关键在于四舍五入，即(int)(f+0.5)