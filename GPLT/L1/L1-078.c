#include <stdio.h>
#include <string.h>

int main(void){
    int n,m,num=0,id=0;
    scanf("%d %d",&n,&m);
    char s[n][501];
    getchar();
    for(int i=0;i<n;i++){
        gets(s[i]);
        if(strstr(s[i],"qiandao")==NULL&&strstr(s[i],"easy")==NULL){
            if(num == m)
                id = i;
            num ++;
        }
    }
    if(num <= m)
        printf("Wo AK le");
    else
        printf("%s",s[id]);
    return 0;
}