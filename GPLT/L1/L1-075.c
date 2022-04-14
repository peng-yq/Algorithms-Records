#include <stdio.h>
#include <string.h>

int main(void){
    char s[7];
    scanf("%s",s);
    if(strlen(s)==6){
        for(int i=0;i<4;i++)
            printf("%c",s[i]);
        printf("-");
        for(int i=4;i<6;i++){
            printf("%c",s[i]);
        }
    }
    else{
        if(((s[0]-'0')*10 + (s[1]-'0')) < 22)
            printf("20%c%c-%c%c",s[0],s[1],s[2],s[3]);
        else
            printf("19%c%c-%c%c",s[0],s[1],s[2],s[3]);
    }
    return 0;
}