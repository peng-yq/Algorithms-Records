#include <stdio.h>
#include <math.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    char q[n];
    for(int i=0;i<m;i++){
        scanf("%s",q);
        double sum =1;
        for(int j=0;j<n;j++){
            if(q[j]=='n')
                sum+=pow(2, n-j-1);
        }
        printf("%.0f\n",sum);
    }
    return 0;
}