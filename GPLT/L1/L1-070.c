#include <stdio.h>
#include <string.h>

int main(void){
    int count=0,id,num=0;
    char s[85];
    while(1){
        gets(s);
        count ++;
        if(strcmp(".",s)==0)
            break;
        else{
            char * p = strstr(s,"chi1 huo3 guo1");
            if(p!=NULL){
                if(num == 0)
                    id = count;
                num ++;
            }           
        }
    }
    printf("%d\n",count-1);
    if(num == 0)
        printf("-_-#");
    else
        printf("%d %d",id,num);
    return 0;
}

//strstr和strcmp函数的运用，前者判断字符串中是否存在目标子串；后着用于判断结束，不能用s[0]=='.'来判断。或者加上strlen==1