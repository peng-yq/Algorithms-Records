#include <stdio.h>

int main(void){
    int num[3][3],sum=0,id1,id2,choose,prize[19]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&num[i][j]);
            sum+=num[i][j];
            if(num[i][j]==0){
                id1 = i;
                id2 = j;
            }
        }
    }
    num[id1][id2] = 45 - sum;
    for(int i=0;i<3;i++){
        int temp1,temp2;
        scanf("%d %d",&temp1,&temp2);
        printf("%d\n",num[temp1-1][temp2-1]);
    }
    scanf("%d",&choose);
    if(choose<=3)
        printf("%d",prize[(num[choose-1][0]+num[choose-1][1]+num[choose-1][2])-6]);
    else if(choose >3 && choose <= 6)
        printf("%d",prize[(num[0][choose-4]+num[1][choose-4]+num[2][choose-4])-6]);
    else if(choose == 7)
        printf("%d",prize[(num[0][0]+num[1][1]+num[2][2])-6]);
    else if(choose == 8)
        printf("%d",prize[(num[0][2]+num[1][1]+num[2][0])-6]);
    return 0;
}