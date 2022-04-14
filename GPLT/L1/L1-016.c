#include <stdio.h>

int main(void){
    int n,i,j,flag=0,sum,q[17]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char m[11]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'}, c[19];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",c);
        sum = 0;
        for(j=0;j<17;j++){
            if(c[j]>='0'&&c[j]<='9'){
                sum+=(c[j]-'0')*q[j];
            }
            else{
                printf("%s\n",c);
                break;
            }
        }
        if(m[sum%11]==c[17]&&j==17){
            flag++;
        }
        else if(j==17){
            printf("%s\n",c);
        }
    }
    if(flag==n){
        printf("All passed");
    }
    return 0;
}