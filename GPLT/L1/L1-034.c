#include <stdio.h>

int main(void){
    int n,a[1001]={0},num=0,max_val=a[1];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int j;
        scanf("%d",&j);
        for(int k=0;k<j;k++){
            int temp;
            scanf("%d",&temp);
            a[temp]++;
        }
    }
    for(int i=1;i<1001;i++){
        if(a[i]>=max_val){
            num=i;
            max_val = a[i];
        }
    }
    printf("%d %d",num,max_val);
    return 0;
}