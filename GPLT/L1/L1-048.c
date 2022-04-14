#include <stdio.h>

int main(void){
    int ra,ca,rb,cb;
    scanf("%d %d",&ra,&ca);
    int arr1[ra][ca];
    for(int i=0;i<ra;i++){
        for(int j=0;j<ca;j++){
            int temp;
            scanf("%d",&temp);
            arr1[i][j]=temp;
        }
    }
    scanf("%d %d",&rb,&cb);
    int arr2[rb][cb];
    for(int i=0;i<rb;i++){
        for(int j=0;j<cb;j++){
            int temp;
            scanf("%d",&temp);
            arr2[i][j]=temp;
        }
    }
    if(ca!=rb)
        printf("Error: %d != %d",ca,rb);
    else{
        printf("%d %d\n",ra,cb);
        for(int i=0;i<ra;i++){
            for(int j=0;j<cb;j++){
                int sum=0;
                for(int k=0;k<ca;k++){
                    sum+=arr1[i][k]*arr2[k][j];
                }
                if(j==0)
                    printf("%d",sum);
                else    
                    printf(" %d",sum);
            }
            printf("\n");
        }
    }
    return 0;
}