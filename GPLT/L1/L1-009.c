#include <stdio.h>

long long int gcd(long long int m,long long int n){
    return (n==0)?m:gcd(n,m%n);
}

int main(void){
    long long int a, b, sum_a =0, sum_b = 1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld/%lld",&a,&b);
        sum_a *= b;
        sum_a += sum_b *a;
        sum_b *= b;
        int j = gcd(sum_a,sum_b);
        sum_a /= j;
        sum_b /= j;
    }
    if (sum_a % sum_b == 0)
		printf("%lld\n", sum_a / sum_b);
	else if (sum_a < sum_b)
		printf("%lld/%lld\n", sum_a, sum_b);
	else
		printf("%lld %lld/%lld\n", sum_a / sum_b, sum_a % sum_b, sum_b);
    return 0;
}

//长整型；gcd算法在相加的过程中约分