#include <stdio.h>

int main(void){
    int school[101],n,max_team=0,id[101][11][10],x=0,pre=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>max_team)
        max_team = temp;
        school[i]= temp;
    }
    for(int i=0;i<max_team;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<n;k++){
                if(i<=school[k]-1){
                    if(pre!=k)
                        x++;
                    else
                        x+=2;
                    id[k][i][j]=x;
                    pre = k;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("#%d\n",i+1);
        for(int j=0;j<school[i];j++){
            for(int k=0;k<10;k++){
                if(k!=9)
                    printf("%d ",id[i][j][k]);
                else
                    printf("%d",id[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}

//看来题解才做出来，其实题意和解法很好理解，主要循环很绕，三维数组用的很巧妙。