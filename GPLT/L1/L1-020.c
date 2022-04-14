#include <stdio.h>

int main(void){
    int n,a[100000]={0},flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int j;
        scanf("%d",&j);
        for(int k=0;k<j;k++){
            int h;
            scanf("%d",&h);
            if(j==1){
                break;
            }
            else 
                a[h]=1;   
        }
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num_search;
        scanf("%d",&num_search);
        if(a[num_search]==0){
            flag++;
            a[num_search]=num_search;
            if(flag==1)
                printf("%05d",num_search);
            else
                printf(" %05d",num_search);
        } 
    }
    if(flag==0)
        printf("No one is handsome");
    return 0;
}

//两个易错点：
//1.没有朋友的人可以是只有自己一个人在朋友圈的人，即k=1，此时对输入不做任何处理，注意需要接收输入
//2.会给你0开头的数据（最后两个测试点），因此直接%d会出错，卡了好久orz，因此需要%5d
//3.最后一个后面无空格，这里我们设置第一个没朋友的人前面无空格就好了