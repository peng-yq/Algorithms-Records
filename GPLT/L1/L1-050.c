#include <stdio.h>
#include <math.h>

int main(void){
    long int L,N;
    char c[6];
    scanf("%ld %ld",&L,&N);
    N = pow(26,L) - N;
    for(int i=L-1;i>=0;i--){
        c[i] = N % 26 +'a';
        N/=26;
    }
    for(int i=0;i<L;i++){
        printf("%c",c[i]);
    }
    return 0;
}

//穷举是不行的，将其看成进制转换，即aaa看成000就好办了，变成26进制。