#include <stdio.h>

int main(void){
    char c;
    int n,flag = 0;;
    scanf("%c %d",&c,&n);
    getchar();
    char s[n][n],s1[n][n];
    for(int i=0;i<n;i++){
        gets(s[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]!=s[n-i-1][n-j-1]){
                flag = 1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag == 0){
        printf("bu yong dao le\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i][j]!=' ')
                    s1[i][j]=c;
                else
                    s1[i][j]= ' ';
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                if(s[i][j]!=' ')
                    s1[n-i-1][n-j-1]=c;
                else 
                    s1[n-i-1][n-j-1]=' ';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%c",s1[i][j]);
        printf("\n");
    }
    return 0;
}