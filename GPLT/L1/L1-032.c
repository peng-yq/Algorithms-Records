#include <stdio.h>
#include <string.h>

int main(void){
    int n,i;
    char c,s[10000];
    scanf("%d %c",&n,&c);
    getchar();
    gets(s);
    if(n>strlen(s)){
        for(i=0;i<n-strlen(s);i++){
            printf("%c",c);
        }
        printf("%s",s);
    }
    else{
        for(i=strlen(s)-n;i<strlen(s);i++){
            printf("%c",s[i]);
        }
    }
    return 0;
}

//这里被字符串数组长度坑了好久。。。。