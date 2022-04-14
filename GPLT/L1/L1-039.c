#include <stdio.h>
#include <string.h>

int main(void){
    int n,i,len,j,k=0;
    char s[1005];
    scanf("%d",&n);
    char s1[105][1005];
    getchar();
    gets(s);
    if(strlen(s)%n==0){
        len = strlen(s)/n;
    }
    else 
        len = strlen(s)/n + 1;
    for(i=len-1;i>=0;i--){
        for(j=0;j<n;j++){ 
            if(k<strlen(s)){
                s1[j][i]=s[k++];
            }
            else 
                s1[j][i]=' ';
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<len;j++)
            printf("%c",s1[i][j]);
        printf("\n");
    }
    return 0;
}

//不要用!strlen(s)%n，这个一直被坑。