#include <stdio.h>

int isdigit(char n[]){
    int i,j,flag=0;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(n[i]==n[j]){
                flag++;
                break;
            }
        }
    }
    return (4-flag);
}

int main(void){
    int n1,n2,flag,count=0;
    char s[10];
    scanf("%d %d",&n1,&n2);
    sprintf(s,"%04d",n1);
    flag = isdigit(s);
    while(flag!=n2){
        n1++;
        count++;
        sprintf(s,"%04d",n1);
        flag = isdigit(s);
    }
    printf("%d %s",count, s);
    return 0;
}

//又被数组长度坑了，下次一定定义大些，不要怕浪费那一点内存！
//sprintf()