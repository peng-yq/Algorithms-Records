#include <stdio.h>
#include <string.h>

int main(void){
    char s[1001];
    int num[10]={0},i,n;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        n = s[i] - '0';
        num[n]++;
    }
    for(i=0;i<10;i++){
        if(num[i]!=0){
            printf("%d:%d\n",i,num[i]);
        }
    }
    return 0;
}