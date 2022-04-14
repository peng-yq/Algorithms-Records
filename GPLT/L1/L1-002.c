#include <stdio.h>

int main(void){
    int n, i = 1, sum = 1, rest, j, k;
    char c;
    scanf("%d %c",&n,&c);
    while(sum <= n){
        i += 2;
        sum += i * 2;
    }
    sum -= i * 2;
    i -= 2;
    rest = n - sum;
    for(j=0;j<=i/2;j++){
        for(k=0;k<j;k++){
            printf(" ");
        }
        for(k=0;k<(i-j*2);k++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(j=0;j<i/2;j++){
        for(k=0;k<(i/2-j-1);k++){
            printf(" ");
        }
        for(k=0;k<(2*j+3);k++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",rest);
    return 0;
}