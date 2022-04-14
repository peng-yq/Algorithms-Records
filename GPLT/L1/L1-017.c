#include <stdio.h>
#include <string.h>

int main(void){
    char c[51];
    int i;
    float flag=1.0,res,n,count=0;
    scanf("%s",c);
    if(c[0]=='-'){
        flag +=0.5;
        n = strlen(c)-1;
    }
    else{
        n = strlen(c);
    }
    if(c[strlen(c)-1]%2==0){
        flag*=2;
    }
    for(i=0;i<strlen(c);i++){
        if(c[i]=='2'){
            count++;
        }
    }
    res = (count / n) * flag * 100.0;
    printf("%.2f%%\n",res);
}