#include <stdio.h>

int main(void){
    char s[10001];
    int G,P,L,T;
    G=P=L=T=0;
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='g'||s[i]=='G')
            G++;
        if(s[i]=='p'||s[i]=='P')
            P++;
        if(s[i]=='l'||s[i]=='L')
            L++;
        else if(s[i]=='t'||s[i]=='T')
            T++;
    }
    while(G || P || L || T){
        if(G){
            printf("G");
            G--;
        }
        if(P){
            printf("P");
            P--;
        }
        if(L){
            printf("L");
            L--;
        }
        if(T){
            printf("T");
            T--;
        }
    }
    return 0;
}

//这道题其实很简单，在如何输出的时候卡了半天，一直在想咋循环，其实是多余的，直接按人的思维去输出就好了