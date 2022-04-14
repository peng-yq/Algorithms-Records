#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    char s[101];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        int count = 0,id;
        gets(s);
        for(int j=0;j<strlen(s);j++){
            if(s[j]==','||s[j]=='.'){
                if(s[j-1]=='g'&&s[j-2]=='n'&&s[j-3]=='o')
                    count ++;
            }
        }
        if(count == 2){
            int flag = 0;
            for(int j=strlen(s)-1;j>0;j--){
                if(s[j] == ' '){
                    flag ++;
                    if(flag == 3){
                        id = j;
                        break;
                    }
                }
            }
            for(int i=0;i<id;i++){
                printf("%c",s[i]);
            }
            printf(" qiao ben zhong.\n");
        }
        else
            printf("Skipped\n");      
    }
    return 0;
}

//这道题用python的话可能二十行代码都要不了