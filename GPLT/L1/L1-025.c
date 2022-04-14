#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isdigit(char c[]){
    return (strspn(c,"0123456789")==strlen(c));
}

int main(void){
    char c1[1000],c2[1000];
    scanf("%s",c1);
    getchar();
    gets(c2);
    long int n1=atol(c1),n2=atol(c2),flag=0;
    if(isdigit(c1) && n1>=1 && n1<=1000)
        printf("%d ",n1);
    else{
        printf("? ");
        flag =1;
    }
    printf("+ ");
    if(isdigit(c2) && n2>=1 && n2<=1000)
        printf("%d ",n2);
    else{
        printf("? ");
        flag =1;
    }
    printf("= ");
    if(flag == 0)
        printf("%d",n1+n2);
    else 
        printf("?");
    return 0;
}

//strspn判断是否为数字，atoi转换为整型
//两个输入，以第一个空格分割（即第二个字符串可能含有空格）因此不能使用scanf来接收c2，同时还要使用getchar()把第一个空格吃掉