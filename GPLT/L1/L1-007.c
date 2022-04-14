#include <stdio.h>

struct num{
    char y[5];
};

int main(void){
    int i;
    char s[100];
    struct num n[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    scanf("%s",s);
    for(i=0;s[i+1]!='\0';i++){
        if(s[i]=='-'){
            printf("fu ");
        }
        else
        {
            printf("%s ",n[s[i]-'0'].y);
        }
    }
    printf("%s",n[s[i]-'0'].y);
    return 0;
}